//
// Created by davis on 07/08/2019.
//

#ifndef EX2_DATA_H
#define EX2_DATA_H


class Data {

private:
    int dia;
    int mes;
    int ano;

public:
    Data();
    Data(int, int, int);
    ~Data();

    void setDia(int);
    int getDia();

    void setMes(int);
    int getMes();

    void setAno(int);
    int getAno();

    void operator-(Data);
};


#endif //EX2_DATA_H
