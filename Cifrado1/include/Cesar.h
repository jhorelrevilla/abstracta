#ifndef CESAR_H
#define CESAR_H
#include <string.h>
#include <iostream>

using namespace std;

class Cesar{
    public:
        Cesar(int);
        string cifrar(string);
        string descifrar(string);
    private:
        int modulo(int,int);
        int clave;
        string alfabeto="ABCDEFGHIJKLMNOPQRSTUVXYZ";
};

#endif // CESAR_H
