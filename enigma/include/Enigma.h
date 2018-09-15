#ifndef ENIGMA_H
#define ENIGMA_H
#include <string.h>
#include <iostream>
using namespace std;


class Enigma{
    public:
        Enigma(string,string,string);
        void add_steckers(string);
        string co(string);
        string deco(string);
    private:
        int clave1,clave2,clave3;
        string pivote3="V";
        string pivote2="E";
        //////////////////
        string steckers;
        int modulo(int,int);
        string rotor1(string le,bool);
        string rotor2(string le,bool);
        string rotor3(string le,bool);
        string refle(string);

        string alfabeto ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string alfabeto1="EKMFLGDQVZNTOWYHXUSPAIBRCJ";
        string alfabeto2="AJDKSIRUXBLHWTMCQGZNPYFVOE";
        string alfabeto3="BDFHJLCPRTXVZNYEIWGAKMUSQO";
        //////////////////////////////////////////////
        string refl="AYBRCUDHEQFSGLIPJXKNMOTZVW";

};

#endif // ENIGMA_H
