#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QFile"
#include "QIntValidator"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString login = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    QFile file("F:\\test.txt");
    file.open(QIODevice::ReadOnly);
    QString str="";
    QStringList list;
    bool log = false;
    while(!file.atEnd())
    {
        str = file.readLine();
        list = str.split(" ");
        if (list[3]==login){

            if (list[4]==password+"\n"){
                qDebug()<<list[0];
                log = true;
                close();
            }
        }

    }
    if (log == false){
        QMessageBox::critical(this,"Ошибка","Неправильный логин или пароль");
    }

    QFile close;
}
