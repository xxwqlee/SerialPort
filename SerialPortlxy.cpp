#include "SerialPortlxy.h"

using namespace std;
SerialPortlxy::SerialPortlxy(QWidget *parent)
	: QMainWindow(parent)
	, m_bSerialStatus(false)
{
	ui.setupUi(this);
	SerialPortlxy::CMB_initial();//combox初始化
	SerialPortlxy::scan_SP();//扫描可用的串口
	ui.pushButton_send->setEnabled(false);
}


SerialPortlxy::~SerialPortlxy() {
	if (nullptr != m_pSerial)
		delete m_pSerial;
}

void SerialPortlxy::CMB_initial(void)
{
	//combox初始化
	baudList << "50" << "75" << "100" << "134" << "150" << "200" << "300"
		<< "600" << "1200" << "1800" << "2400" << "4800" << "9600"
		<< "14400" << "19200" << "38400" << "56000" << "57600"
		<< "76800" << "115200" << "128000" << "256000";

	ui.comboBox_Baudrate->addItems(baudList);
	ui.comboBox_Baudrate->setCurrentIndex(19);

	parityList << "0" << "1" << "2";

	ui.comboBox_exambit->addItems(parityList);
	ui.comboBox_exambit->setCurrentIndex(0);

	dataBitsList << "6" << "7" << "8";
	ui.comboBox_databit->addItems(dataBitsList);
	ui.comboBox_databit->setCurrentIndex(2);

	stopBitsList << "1";
	stopBitsList << "2";

	ui.comboBox_stopbit->addItems(stopBitsList);
	ui.comboBox_stopbit->setCurrentIndex(0);
	
}

void SerialPortlxy::scan_SP(void)
{
	//查找可用的串口
	QList<QSerialPortInfo>  infos = QSerialPortInfo::availablePorts();
	if (infos.isEmpty())
	{
		//关闭打开按钮的使能  
		ui.pushButton_open->setEnabled(false);
		QMessageBox::warning(this,"Warning!", "There is no SerialPort!!!");
	}
	else
	{
		foreach(const QSerialPortInfo &info, infos)
		{
			QSerialPort serial;
			serial.setPort(info);
			if (serial.open(QIODevice::ReadWrite))
			{
				//将串口号添加到combox 
				ui.comboBox_SPnum->addItem(info.portName());
				//关闭串口等待人为(打开串口按钮)打开  
				serial.close();
			}
			ui.pushButton_open->setEnabled(true);
		}
	}
}

void SerialPortlxy::slot_open(void)
{
	if(!m_bSerialStatus){
		m_pSerial = new QSerialPort;
		//设置串口名  
		m_pSerial->setPortName(ui.comboBox_SPnum->currentText());
		//打开串口  
		m_pSerial->open(QIODevice::ReadWrite);
		//设置波特率  
		m_pSerial->setBaudRate(ui.comboBox_Baudrate->currentText().toInt());
		//设置数据位数  
		switch (ui.comboBox_databit->currentIndex())
		{
		case 8: m_pSerial->setDataBits(QSerialPort::Data8); break;
		case 7: m_pSerial->setDataBits(QSerialPort::Data7); break;
		case 6: m_pSerial->setDataBits(QSerialPort::Data6); break;
		default: break;
		}
		//设置奇偶校验  
		switch (ui.comboBox_exambit->currentIndex())
		{
		case 0: m_pSerial->setParity(QSerialPort::NoParity); break;
		case 1: m_pSerial->setParity(QSerialPort::EvenParity); break;
		case 2: m_pSerial->setParity(QSerialPort::OddParity); break;
		default: break;
		}
		//设置停止位  
		switch (ui.comboBox_stopbit->currentIndex())
		{
		case 1: m_pSerial->setStopBits(QSerialPort::OneStop); break;
		case 2: m_pSerial->setStopBits(QSerialPort::TwoStop); break;
		default: break;
		}
		//设置流控制  
		m_pSerial->setFlowControl(QSerialPort::NoFlowControl);
		//关闭设置菜单使能  
		ui.comboBox_SPnum->setEnabled(false);
		ui.comboBox_Baudrate->setEnabled(false);
		ui.comboBox_databit->setEnabled(false);
		ui.comboBox_exambit->setEnabled(false);
		ui.comboBox_stopbit->setEnabled(false);
		ui.pushButton_send->setEnabled(true);
		ui.pushButton_scan->setEnabled(false);

		ui.pushButton_open->setText(tr("Close"));
		m_bSerialStatus = true;

		//连接信号槽  
		QObject::connect(m_pSerial, &QSerialPort::readyRead, this, &SerialPortlxy::Read_Data);
	}
	else {
		//关闭串口  
		//m_pSerial->clear();
		m_pSerial->close();
		//m_pSerial->deleteLater();
		//恢复设置使能  
		ui.comboBox_SPnum->setEnabled(true);
		ui.comboBox_Baudrate->setEnabled(true);
		ui.comboBox_databit->setEnabled(true);
		ui.comboBox_exambit->setEnabled(true);
		ui.comboBox_stopbit->setEnabled(true);
		ui.pushButton_send->setEnabled(false);
		ui.pushButton_scan->setEnabled(true);
		ui.pushButton_open->setText(tr("Open"));
		m_bSerialStatus = false;
	}

}
void SerialPortlxy::slot_save(void)
{

	QString spath = QFileDialog::getSaveFileName(this, tr("Save"), ".", tr("*.txt"));
	if (!spath.isEmpty())
	{
		ofstream txtout(spath.toStdString());
		QString Data_receive = ui.textBrowser_receive->toPlainText();
		txtout << Data_receive.toStdString();
		txtout.close();
	}
}

void SerialPortlxy::slot_load(void)
{
	QString opath = QFileDialog::getOpenFileName(this, tr("Load"), ".", tr("*.txt"));

	if (opath.length())
	{
		ifstream txtin(opath.toStdString());
		char buf[100];
		QString txt;
		if (txtin.is_open())
		{
			while (!txtin.eof())
			{
				txtin.getline(buf, 100);
				QString tbuf = buf;
				txt += tbuf + "\n";
			}
			txtin.close();
			ui.textEdit_send->setPlainText(txt);
		}
	}
}

void SerialPortlxy::Read_Data(void)
{
	QByteArray buf;
	buf = m_pSerial->readAll();
	if (!buf.isEmpty())
	{
		QString str = ui.textBrowser_receive->toPlainText();
		str += tr(buf);
		ui.textBrowser_receive->clear();
		ui.textBrowser_receive->append(str);
	}
	buf.clear();
}

void SerialPortlxy::slot_send(void)
{
	m_pSerial->write(ui.textEdit_send->toPlainText().toLatin1());
}

void SerialPortlxy::slot_clear(void)
{
	ui.textBrowser_receive->clear();
}

void SerialPortlxy::slot_clearsend(void)
{
	ui.textEdit_send->clear();
}



