
#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_go, &QPushButton::clicked, this, &MainWindow::on_PushButton_go_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_PushButton_go_clicked() {
    QRegularExpression re("http[s]{0,1}://[\\w\\%.]*\\w+[/\\w\\%+]*.\\w*");
    QString tran = re.match(ui->textEdit_url->toPlainText()).captured(0);

    if(ui->radioButton_jsdelivr->isChecked()) {
        QRegularExpression jsdelivrRe("cdn.jsdelivr.net/gh/[\\w-]*/[\\w-]*/");
        tran.replace("raw.githubusercontent.com", "cdn.jsdelivr.net/gh");
        QString jsdelivr = jsdelivrRe.match(tran).captured(0);
        tran.replace(tran.indexOf(jsdelivr) + jsdelivr.length() - 1, 1, "@");
    }else if(ui->radioButton_staticaly->isChecked()) {
        tran.replace("raw.githubusercontent.com", "cdn.statically.io/gh");
    }else if(ui->radioButton_githack->isChecked()) {
        tran.replace("raw.githubusercontent.com", "rawcdn.githack.com");
    }

    ui->textEdit_tran->setText(tran);
    QApplication::clipboard()->setText(tran);
}