/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_url;
    QTextEdit *textEdit_url;
    QLabel *label_tran;
    QTextEdit *textEdit_tran;
    QPushButton *pushButton_go;
    QGroupBox *CDNgroupBox;
    QRadioButton *radioButton_jsdelivr;
    QRadioButton *radioButton_staticaly;
    QRadioButton *radioButton_githack;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *CDNGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(645, 256);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_url = new QLabel(centralwidget);
        label_url->setObjectName("label_url");
        label_url->setGeometry(QRect(30, 6, 51, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(20);
        label_url->setFont(font);
        textEdit_url = new QTextEdit(centralwidget);
        textEdit_url->setObjectName("textEdit_url");
        textEdit_url->setGeometry(QRect(99, 6, 531, 31));
        label_tran = new QLabel(centralwidget);
        label_tran->setObjectName("label_tran");
        label_tran->setGeometry(QRect(6, 60, 81, 41));
        label_tran->setFont(font);
        textEdit_tran = new QTextEdit(centralwidget);
        textEdit_tran->setObjectName("textEdit_tran");
        textEdit_tran->setGeometry(QRect(99, 62, 531, 31));
        pushButton_go = new QPushButton(centralwidget);
        pushButton_go->setObjectName("pushButton_go");
        pushButton_go->setGeometry(QRect(540, 160, 80, 32));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MV Boli")});
        font1.setPointSize(16);
        pushButton_go->setFont(font1);
        CDNgroupBox = new QGroupBox(centralwidget);
        CDNgroupBox->setObjectName("CDNgroupBox");
        CDNgroupBox->setGeometry(QRect(20, 110, 120, 111));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MV Boli")});
        font2.setPointSize(12);
        CDNgroupBox->setFont(font2);
        radioButton_jsdelivr = new QRadioButton(CDNgroupBox);
        CDNGroup = new QButtonGroup(MainWindow);
        CDNGroup->setObjectName("CDNGroup");
        CDNGroup->addButton(radioButton_jsdelivr);
        radioButton_jsdelivr->setObjectName("radioButton_jsdelivr");
        radioButton_jsdelivr->setGeometry(QRect(10, 30, 81, 26));
        radioButton_jsdelivr->setFont(font2);
        radioButton_jsdelivr->setChecked(true);
        radioButton_staticaly = new QRadioButton(CDNgroupBox);
        CDNGroup->addButton(radioButton_staticaly);
        radioButton_staticaly->setObjectName("radioButton_staticaly");
        radioButton_staticaly->setGeometry(QRect(10, 50, 81, 26));
        radioButton_staticaly->setFont(font2);
        radioButton_githack = new QRadioButton(CDNgroupBox);
        CDNGroup->addButton(radioButton_githack);
        radioButton_githack->setObjectName("radioButton_githack");
        radioButton_githack->setGeometry(QRect(10, 70, 81, 26));
        radioButton_githack->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 645, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "GithubUrlTran", nullptr));
        label_url->setText(QCoreApplication::translate("MainWindow", "Url\357\274\232", nullptr));
        label_tran->setText(QCoreApplication::translate("MainWindow", "Tran\357\274\232", nullptr));
        pushButton_go->setText(QCoreApplication::translate("MainWindow", "go", nullptr));
        CDNgroupBox->setTitle(QCoreApplication::translate("MainWindow", "CDN", nullptr));
        radioButton_jsdelivr->setText(QCoreApplication::translate("MainWindow", "jsdelivr", nullptr));
        radioButton_staticaly->setText(QCoreApplication::translate("MainWindow", "staticaly", nullptr));
        radioButton_githack->setText(QCoreApplication::translate("MainWindow", "githack", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
