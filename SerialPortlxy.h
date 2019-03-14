#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SerialPortlxy.h"
#include <QtSerialPort/QSerialPort>  
#include <QtSerialPort/QSerialPortInfo>
#include <QString>
#include <QKeyEvent>
#include <fstream>
#include <QFileDialog>
#include <QMessageBox> 
#include <QDebug>
class SerialPortlxy : public QMainWindow
{
	Q_OBJECT

public:
	SerialPortlxy(QWidget *parent = Q_NULLPTR);
	~SerialPortlxy();
	
private:
	Ui::SerialPortlxyClass ui; 

	bool		m_bSerialStatus;
	QSerialPort *m_pSerial; //���ڶ���
	
	QStringList baudList;//������  
	QStringList parityList;//У��λ  
	QStringList dataBitsList;//����λ  
	QStringList stopBitsList;//ֹͣλ  

	void CMB_initial(void);
	private slots:
		void scan_SP(void);
		void slot_load(void);
		void slot_save(void);
		void slot_send(void);
		void slot_clear(void);
		void slot_open(void);
		void slot_clearsend(void);
		void Read_Data(void);
};
