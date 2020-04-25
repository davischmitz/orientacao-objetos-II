#include "widget.h"
#include "ui_widget.h"
#include <QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setCaseSensitive(bool isCaseSensitive) {
    this->caseSensitive = isCaseSensitive;
}

Qt::CaseSensitivity Widget::getCaseSensitivity() {
    return this->caseSensitive ? Qt::CaseSensitive : Qt::CaseInsensitive;
}

int Widget::getOcurrencesCount(QString input, QString search) {
    return input.count(search, getCaseSensitivity());
}

void Widget::search(QString inputText, QString searchTerm) {
    ui->occurences->setText(QString::number(getOcurrencesCount(inputText, searchTerm)));

    ui->inputText->setText(inputText.replace(searchTerm, QString("<font color=\"#FF0000\">" + searchTerm + "</font>"), getCaseSensitivity()));
}

void Widget::on_searchButton_clicked() {
    QString inputText = ui->inputText->toPlainText();
    QString searchTerm = ui->searchTerm->text();

    this->search(inputText, searchTerm);
}

void Widget::on_caseSensitive_clicked(bool checked) {
    this->setCaseSensitive(checked);
}
