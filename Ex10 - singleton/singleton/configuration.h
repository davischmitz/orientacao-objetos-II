#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#include <QString>

class configuration {

private:
    QString ip;
    int port;
    QString user;
    QString password;

    static configuration* instance;

    configuration();

public:
    static configuration* getInstance();

    void setIp(QString);
    QString getIp();

    void setPort(int);
    int getPort();

    void setUser(QString);
    QString getUser();

    void setPassword(QString);
    QString getPassword();
};

#endif // CONFIGURATION_H
