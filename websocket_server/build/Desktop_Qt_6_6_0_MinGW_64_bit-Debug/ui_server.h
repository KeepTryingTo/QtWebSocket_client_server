/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QWidget *centralwidget;
    QPushButton *clear_btn;
    QPushButton *exit_btn;
    QTextEdit *input_text;
    QTextEdit *ip_text;
    QSpinBox *port_box;
    QPushButton *search_btn;
    QPushButton *send_btn;
    QPlainTextEdit *chat_frame;
    QPushButton *close_btn;
    QPushButton *listen_btn;
    QPushButton *send_file;

    void setupUi(QMainWindow *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName("Server");
        Server->resize(509, 375);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(16);
        Server->setFont(font);
        centralwidget = new QWidget(Server);
        centralwidget->setObjectName("centralwidget");
        clear_btn = new QPushButton(centralwidget);
        clear_btn->setObjectName("clear_btn");
        clear_btn->setGeometry(QRect(350, 260, 141, 31));
        exit_btn = new QPushButton(centralwidget);
        exit_btn->setObjectName("exit_btn");
        exit_btn->setGeometry(QRect(430, 320, 71, 31));
        input_text = new QTextEdit(centralwidget);
        input_text->setObjectName("input_text");
        input_text->setGeometry(QRect(10, 320, 291, 31));
        ip_text = new QTextEdit(centralwidget);
        ip_text->setObjectName("ip_text");
        ip_text->setGeometry(QRect(350, 10, 141, 31));
        port_box = new QSpinBox(centralwidget);
        port_box->setObjectName("port_box");
        port_box->setGeometry(QRect(350, 60, 141, 31));
        port_box->setAlignment(Qt::AlignmentFlag::AlignCenter);
        port_box->setMinimum(1000);
        port_box->setMaximum(99999);
        port_box->setValue(8080);
        search_btn = new QPushButton(centralwidget);
        search_btn->setObjectName("search_btn");
        search_btn->setGeometry(QRect(350, 210, 141, 31));
        send_btn = new QPushButton(centralwidget);
        send_btn->setObjectName("send_btn");
        send_btn->setGeometry(QRect(350, 320, 71, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        send_btn->setFont(font1);
        chat_frame = new QPlainTextEdit(centralwidget);
        chat_frame->setObjectName("chat_frame");
        chat_frame->setGeometry(QRect(10, 10, 331, 301));
        close_btn = new QPushButton(centralwidget);
        close_btn->setObjectName("close_btn");
        close_btn->setGeometry(QRect(350, 160, 141, 31));
        listen_btn = new QPushButton(centralwidget);
        listen_btn->setObjectName("listen_btn");
        listen_btn->setGeometry(QRect(350, 110, 141, 31));
        send_file = new QPushButton(centralwidget);
        send_file->setObjectName("send_file");
        send_file->setGeometry(QRect(300, 320, 41, 31));
        send_file->setFont(font1);
        Server->setCentralWidget(centralwidget);

        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QMainWindow *Server)
    {
        Server->setWindowTitle(QCoreApplication::translate("Server", "Server", nullptr));
        clear_btn->setText(QCoreApplication::translate("Server", "\346\270\205\347\251\272\350\201\212\345\244\251\344\277\241\346\201\257", nullptr));
        exit_btn->setText(QCoreApplication::translate("Server", "\351\200\200\345\207\272", nullptr));
        input_text->setHtml(QCoreApplication::translate("Server", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        ip_text->setHtml(QCoreApplication::translate("Server", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#16e1f3;\">10.17.72.253</span></p></body></html>", nullptr));
        search_btn->setText(QCoreApplication::translate("Server", "\346\237\245\347\234\213\350\277\236\346\216\245\347\212\266\346\200\201", nullptr));
        send_btn->setText(QCoreApplication::translate("Server", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        close_btn->setText(QCoreApplication::translate("Server", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
        listen_btn->setText(QCoreApplication::translate("Server", "\345\274\200\345\247\213\347\233\221\345\220\254", nullptr));
        send_file->setText(QCoreApplication::translate("Server", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
