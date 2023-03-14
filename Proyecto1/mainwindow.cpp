#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "parserctx.hpp"
#include "Symbols/environment.hpp"
#include "patron_singleton/singleton.hpp"

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // se crea un mensaje y que muestra el texto del textArea
    Singleton *single = Singleton::getInstance();
    QMessageBox *msg = new QMessageBox();
    Environment *globalEnv = new Environment();
    Proyecto1::ParserCtx analizador;
    analizador.Analizar(ui->textEdit->toPlainText().toStdString());
    analizador.Main->ejecutar(globalEnv);
    msg->setText(QString::fromStdString(analizador.Salida));
    msg->exec();
    ui->txtConsola->setText(QString::fromStdString(single->getConsola()));
    /*msg->setText("¡Hola a todos! \n el texto es: " +
                 ui->textEdit->toPlainText());
    msg->exec();
    //ui->textEdit->setText("se ha pulsado el botón");

    // añadimos el parser
    Proyecto1::ParserCtx analizador;

   analizador.Analizar(ui->textEdit->toPlainText().toStdString());

    QMessageBox *msg2 = new QMessageBox();
    msg2->setText(QString::fromStdString( analizador.Salida));
    msg2->exec();*/
}

