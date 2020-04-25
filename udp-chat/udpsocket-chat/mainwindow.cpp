#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    socket = new QUdpSocket(this);
    connect(socket, &QUdpSocket::readyRead, this, &MainWindow::dataArrived);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dataArrived()
{
    while (socket->hasPendingDatagrams()) {
        QByteArray buffer;
        buffer.resize(socket->pendingDatagramSize());

        QHostAddress sender;
        quint16 senderPort;

        socket->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);

        QString message;
        message.append(sender.toString()).append(":").append(QString::number(senderPort)).append(":  ").append(buffer);

        ui->textEditMessageReceived->append(message);
    }
}

void MainWindow::on_pushButtonMonitoringConnect_clicked() {

    QString portNum = ui->lineEditMonitoringPort->text();

    bool status = socket->bind(QHostAddress::LocalHost, portNum.toShort());

    if(status) {
        QMessageBox::information(this,"Server Started", QString("Now listening on port ") + portNum);
        ui->labelMonitoringStatus->setText(QString("Listening on port ") + portNum);
    } else {
        QMessageBox::critical(this, "Server start failure", socket->errorString());
    }
}

void MainWindow::on_pushButtonSend_clicked()
{
    QString ipNum = ui->lineEditSendingIp->text();
    QString portNum = ui->lineEditSendingPort->text();

    QHostAddress addr(ipNum);

    QByteArray data; // Message for send
    data += ui->textEditMessageToSend->toPlainText();

    socket->writeDatagram(data, addr, portNum.toShort());

    ui->textEditMessageToSend->clear();
}
