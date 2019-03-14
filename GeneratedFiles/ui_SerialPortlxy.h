/********************************************************************************
** Form generated from reading UI file 'SerialPortlxy.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPORTLXY_H
#define UI_SERIALPORTLXY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialPortlxyClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_8;
    QTextBrowser *textBrowser_receive;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QComboBox *comboBox_SPnum;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *comboBox_Baudrate;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *comboBox_databit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *comboBox_exambit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox_stopbit;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_scan;
    QPushButton *pushButton_open;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_save;
    QPushButton *pushButton_clear;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_7;
    QTextEdit *textEdit_send;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_load;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton__clearsend;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_send;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *SerialPortlxyClass)
    {
        if (SerialPortlxyClass->objectName().isEmpty())
            SerialPortlxyClass->setObjectName(QStringLiteral("SerialPortlxyClass"));
        SerialPortlxyClass->resize(512, 383);
        centralWidget = new QWidget(SerialPortlxyClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        textBrowser_receive = new QTextBrowser(centralWidget);
        textBrowser_receive->setObjectName(QStringLiteral("textBrowser_receive"));

        horizontalLayout_8->addWidget(textBrowser_receive);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_9->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        comboBox_SPnum = new QComboBox(centralWidget);
        comboBox_SPnum->setObjectName(QStringLiteral("comboBox_SPnum"));

        horizontalLayout_6->addWidget(comboBox_SPnum);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        comboBox_Baudrate = new QComboBox(centralWidget);
        comboBox_Baudrate->setObjectName(QStringLiteral("comboBox_Baudrate"));

        horizontalLayout_4->addWidget(comboBox_Baudrate);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        comboBox_databit = new QComboBox(centralWidget);
        comboBox_databit->setObjectName(QStringLiteral("comboBox_databit"));

        horizontalLayout_3->addWidget(comboBox_databit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        comboBox_exambit = new QComboBox(centralWidget);
        comboBox_exambit->setObjectName(QStringLiteral("comboBox_exambit"));

        horizontalLayout_5->addWidget(comboBox_exambit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox_stopbit = new QComboBox(centralWidget);
        comboBox_stopbit->setObjectName(QStringLiteral("comboBox_stopbit"));

        horizontalLayout_2->addWidget(comboBox_stopbit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        pushButton_scan = new QPushButton(centralWidget);
        pushButton_scan->setObjectName(QStringLiteral("pushButton_scan"));

        horizontalLayout_11->addWidget(pushButton_scan);

        pushButton_open = new QPushButton(centralWidget);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));

        horizontalLayout_11->addWidget(pushButton_open);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_save = new QPushButton(centralWidget);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        horizontalLayout->addWidget(pushButton_save);

        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));

        horizontalLayout->addWidget(pushButton_clear);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_9->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        textEdit_send = new QTextEdit(centralWidget);
        textEdit_send->setObjectName(QStringLiteral("textEdit_send"));

        horizontalLayout_7->addWidget(textEdit_send);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        pushButton_load = new QPushButton(centralWidget);
        pushButton_load->setObjectName(QStringLiteral("pushButton_load"));

        verticalLayout_4->addWidget(pushButton_load);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        pushButton__clearsend = new QPushButton(centralWidget);
        pushButton__clearsend->setObjectName(QStringLiteral("pushButton__clearsend"));

        verticalLayout_4->addWidget(pushButton__clearsend);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        pushButton_send = new QPushButton(centralWidget);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));

        verticalLayout_4->addWidget(pushButton_send);


        horizontalLayout_7->addLayout(verticalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_10->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_10);

        SerialPortlxyClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(SerialPortlxyClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SerialPortlxyClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SerialPortlxyClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SerialPortlxyClass->setStatusBar(statusBar);
        toolBar = new QToolBar(SerialPortlxyClass);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        SerialPortlxyClass->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(SerialPortlxyClass);
        QObject::connect(pushButton_open, SIGNAL(clicked()), SerialPortlxyClass, SLOT(slot_open()));
        QObject::connect(pushButton_save, SIGNAL(clicked()), SerialPortlxyClass, SLOT(slot_save()));
        QObject::connect(pushButton_clear, SIGNAL(clicked()), SerialPortlxyClass, SLOT(slot_clear()));
        QObject::connect(pushButton_load, SIGNAL(clicked()), SerialPortlxyClass, SLOT(slot_load()));
        QObject::connect(pushButton__clearsend, SIGNAL(clicked()), SerialPortlxyClass, SLOT(slot_clearsend()));
        QObject::connect(pushButton_send, SIGNAL(clicked()), SerialPortlxyClass, SLOT(slot_send()));
        QObject::connect(pushButton_scan, SIGNAL(clicked()), SerialPortlxyClass, SLOT(scan_SP()));

        QMetaObject::connectSlotsByName(SerialPortlxyClass);
    } // setupUi

    void retranslateUi(QMainWindow *SerialPortlxyClass)
    {
        SerialPortlxyClass->setWindowTitle(QApplication::translate("SerialPortlxyClass", "MySerialPort", Q_NULLPTR));
        label->setText(QApplication::translate("SerialPortlxyClass", "\346\216\245\346\224\266\347\252\227\345\217\243", Q_NULLPTR));
        textBrowser_receive->setHtml(QApplication::translate("SerialPortlxyClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Defalut values:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">123456789</p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("SerialPortlxyClass", "\344\270\262\345\217\243\345\217\267", Q_NULLPTR));
        label_5->setText(QApplication::translate("SerialPortlxyClass", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        label_4->setText(QApplication::translate("SerialPortlxyClass", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        label_6->setText(QApplication::translate("SerialPortlxyClass", "\345\245\207\345\201\266\346\240\241\351\252\214", Q_NULLPTR));
        label_3->setText(QApplication::translate("SerialPortlxyClass", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        pushButton_scan->setText(QApplication::translate("SerialPortlxyClass", "\346\211\253\346\217\217\344\270\262\345\217\243", Q_NULLPTR));
        pushButton_open->setText(QApplication::translate("SerialPortlxyClass", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        pushButton_save->setText(QApplication::translate("SerialPortlxyClass", "\344\277\235\345\255\230\346\225\260\346\215\256", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("SerialPortlxyClass", "\346\270\205\347\251\272\346\225\260\346\215\256", Q_NULLPTR));
        label_2->setText(QApplication::translate("SerialPortlxyClass", "\345\217\221\351\200\201\347\252\227\345\217\243", Q_NULLPTR));
        pushButton_load->setText(QApplication::translate("SerialPortlxyClass", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        pushButton__clearsend->setText(QApplication::translate("SerialPortlxyClass", "\346\270\205\347\251\272\345\217\221\351\200\201", Q_NULLPTR));
        pushButton_send->setText(QApplication::translate("SerialPortlxyClass", "\345\217\221\351\200\201\346\225\260\346\215\256", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("SerialPortlxyClass", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SerialPortlxyClass: public Ui_SerialPortlxyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORTLXY_H
