#ifndef CAKETEMPLATE_H
#define CAKETEMPLATE_H

#include <QList>
#include <QString>

using namespace std;

class CakeTemplate {

protected:
    QList<string> ingredientes;

public:
    CakeTemplate();
    virtual ~CakeTemplate();

    virtual void prepararMassa() = 0;
    virtual void aquecerForno() = 0;
    virtual void prepararCobertura() = 0;
    virtual void assar() = 0;

    void executar();
};

#endif // CAKETEMPLATE_H
