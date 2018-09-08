#ifndef ENIGMA_H
#define ENIGMA_H
#include <string.h>
#include <iostream>
using namespace std;


class Enigma{
    public:
        Enigma();
        string co(string);
        string deco();
    private:
        string rotor1(string);
        string rotor2(string);
        string rotor3(string);
        string refle(string);
        string alfabeto="ABCDEFGHIJKLMNOPQRSTUVXYZ";
        string alfabeto1="EKMFLGDQVZNTOWYHXUSPAIBRCJ";
        string alfabeto2="AJDKSIRUXBLHWTMCQGZNPYFVOE";
        string alfabeto3="BDFHJLCPRTXVZNYEIWGAKMUSQO";
        //////////////////////////////////////////////
        string refl="AYBRCUDHEQFSGLIPJXKNMOTZVW";

};

#endif // ENIGMA_H
