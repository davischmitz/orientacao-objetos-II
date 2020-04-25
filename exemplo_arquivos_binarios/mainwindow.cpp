#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDataStream>

MainWindow::MainWindow(QWidget *parent) :
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

    conta objcontaleitura;

    QFile f(ui->lineEdit->text());// Associa o objeto f a um arquivo chamado com nome digitado no campo

   if( !f.exists() ) {// Arquivo não existe
       ui->textEdit->setText("Arquivo não Existe.");
       return;
   }

   if( !f.open(QIODevice::ReadWrite) ){ // Se existir abre
        ui->textEdit->setText( "Sem permissão para Abrir o arquivo.");
        return;
   }

   QDataStream StreamBinario(&f);

   char BufferBytes[sizeof(conta)];

   StreamBinario.readRawData(BufferBytes,sizeof(conta));

   memcpy(&objcontaleitura, BufferBytes, sizeof(conta));

   // Arquivo foi aberto. Agora necessita fechá-lo
   ui->textEdit->setText(QString("Conta: %1 Saldo: %2").arg(objcontaleitura.numero).arg(objcontaleitura.saldo));
   f.close();



}

void MainWindow::on_pushButton_2_clicked()
{
    conta objcontaescrita;

    QFile f(ui->lineEdit->text());// Associa o objeto f a um arquivo chamado com nome digitado no campo

    if( !f.open(QIODevice::ReadWrite) ){ // Se existir abre
         ui->textEdit->setText( "Sem permissão para Abrir o arquivo.");
         return;
    }

    objcontaescrita.numero = ui->lineEdit_2->text().toInt();
    objcontaescrita.saldo = ui->lineEdit_3->text().toFloat();

    QDataStream StreamBinario(&f);

    char BufferBytes[sizeof(conta)];


    memcpy(BufferBytes, &objcontaescrita, sizeof(conta));

    StreamBinario.writeRawData(BufferBytes,sizeof(conta));

    f.close();



}
