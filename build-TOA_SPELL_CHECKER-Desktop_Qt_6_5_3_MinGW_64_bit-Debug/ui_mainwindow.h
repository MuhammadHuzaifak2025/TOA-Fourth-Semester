/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QLabel *label;
    QListWidget *listWidget_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: black;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 40, 271, 151));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(50,50,50,0.7);\n"
"border-radius: 20px;\n"
"padding: 5px;\n"
"color: white;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(300, 40, 121, 41));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: #1DB954;\n"
"text-align: centre;\n"
"color: black;"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 240, 271, 311));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(14);
        font2.setUnderline(true);
        listWidget->setFont(font2);
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"background-color: rgba(40, 40, 40,0.7);\n"
"color:red;\n"
"border: 1px rgba(40, 40, 40,0.7); \n"
"border-radius: 15px;\n"
" }\n"
"\n"
"QListWidget::item {\n"
"background-color: rgba(40, 40, 40,0.7);\n"
"padding: 10px;\n"
"border: 1px rgba(40, 40, 40,0.7); \n"
"border-radius: 15px;\n"
"}\n"
"\n"
"QScrollBar:vertical, QScrollBar:horizontal {\n"
"background-color: rgba(40, 40, 40,0.7);\n"
"width: 10px;\n"
"margin: 0px 0px 0px 0px;\n"
"border: 1px rgba(40, 40, 40,0.7); \n"
"border-radius: 5px 0 0 5px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"background: #a0a0a0;\n"
"min-height: 20px;\n"
"border: 1px rgba(40, 40, 40,0.7); \n"
"border-radius: 5px 0 0 5px;\n"
"\n"
"}\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical, QScrollBar::add-line:horizontal,QScrollBar::sub-line:horizontal {\n"
"border: none;\n"
"background: none;\n"
"border: 1px rgba(40, 40, 40,0.7); \n"
"border-radius: 5px 0 0 5px;\n"
"\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar"
                        "::sub-page:vertical, QScrollBar::add-page:horizontal,  QScrollBar::sub-page:horizontal{\n"
"background: none;\n"
"border: 1px rgba(40, 40, 40,0.7); \n"
"border-radius: 5px 0 0 5px;\n"
"\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 0, 181, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color:white;"));
        listWidget_2 = new QListWidget(centralwidget);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(490, 140, 271, 411));
        listWidget_2->setFont(font);
        listWidget_2->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"background-color: rgba(40, 40, 40,0.7);\n"
"color:white;\n"
"selection-background-color: #a0a0a0;\n"
"border: 1px rgba(40, 40, 40,0.7); \n"
"border-radius: 15px;\n"
" }\n"
"\n"
"QListWidget::item {\n"
"background-color: rgba(40, 40, 40,0.7);\n"
"padding: 10px;\n"
"border: 1px rgba(40, 40, 40,0.7); \n"
"border-radius: 15px;\n"
"}\n"
"QListWidget::item:hover {\n"
"background-color: rgba(40, 40, 40,0.3);\n"
"border: 1px rgba(40, 40, 40,0.7); \n"
"border-radius: 15px;\n"
"}\n"
"\n"
"QScrollBar:vertical, QScrollBar:horizontal {\n"
"background-color: rgba(40, 40, 40,0.7);\n"
"width: 10px;\n"
"margin: 0px 0px 0px 0px;\n"
"border: 1px rgba(40, 40, 40,0.7); \n"
"border-radius: 5px 0 0 5px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"background: #a0a0a0;\n"
"min-height: 20px;\n"
"border: 1px rgba(40, 40, 40,0.7); \n"
"border-radius: 5px 0 0 5px;\n"
"\n"
"}\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical, QScrollBar::add-line:horizontal,QScrollBar::su"
                        "b-line:horizontal {\n"
"border: none;\n"
"background: none;\n"
"border: 1px rgba(40, 40, 40,0.7); \n"
"border-radius: 5px 0 0 5px;\n"
"\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical, QScrollBar::add-page:horizontal,  QScrollBar::sub-page:horizontal{\n"
"background: none;\n"
"border: 1px rgba(40, 40, 40,0.7); \n"
"border-radius: 5px 0 0 5px;\n"
"\n"
"}\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 90, 251, 31));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 200, 271, 31));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color:white;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(499, 50, 251, 31));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: #1DB954;\n"
"text-align: centre;\n"
"color: black;"));
        MainWindow->setCentralWidget(centralwidget);
        textEdit->raise();
        listWidget->raise();
        label->raise();
        listWidget_2->raise();
        label_2->raise();
        label_3->raise();
        pushButton->raise();
        pushButton_2->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI';\"><br /></p></body></html>", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Paragraph", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Check Spelling", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Regex Spelling Checker ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "List of words being searched", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Misspelled Words", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Select Dictionary", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
