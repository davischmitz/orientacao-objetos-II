#ifndef PIZZABASE_H
#define PIZZABASE_H


class Pizza {

protected:
    double valor;
    int calorias;

public:
    Pizza();
    virtual ~Pizza();

    void setValor(double);
    virtual double getValor() = 0;

    void setCalorias(int);
    virtual int getCalorias() = 0;
};

#endif // PIZZABASE_H
