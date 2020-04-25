#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

private:
    bool caseSensitive = false;

    void search(QString, QString);

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void setCaseSensitive(bool);

    Qt::CaseSensitivity getCaseSensitivity();

    int getOcurrencesCount(QString, QString);

private slots:
    void on_searchButton_clicked();

    void on_caseSensitive_clicked(bool checked);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
