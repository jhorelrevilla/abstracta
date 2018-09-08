#include "Enigma.h"

Enigma::Enigma(){
    cout<<""<<endl;
}
string Enigma::co(string mens){
    string result;
    string letra;
    for(int i=0;i<mens.size();i++){
        for(int j=0;j<alfabeto.size();j++){
            if(mens[i]==alfabeto[j]){

                letra=mens[i];
                //cout<<letra;
                letra=rotor1(letra);
                //cout<<letra;
                letra=rotor2(letra);
                //cout<<letra;
                letra=rotor3(letra);
                //cout<<letra;
                letra=refle(letra);
                //cout<<letra;
                letra=rotor3(letra);
                //cout<<letra;
                letra=rotor2(letra);
                //cout<<letra;
                letra=rotor1(letra);
                //cout<<letra<<endl;
                result+=letra;
            }
        }
    }
    return result;
}

string Enigma::rotor1(string le){
    string r;
    for(int j=0;j<alfabeto.size();j++){
        if(alfabeto[j]==le[0]){
            r+=alfabeto1[j];
            return r;
        }
    }
}
string Enigma::rotor2(string le ){
    string r;
    for(int j=0;j<alfabeto.size();j++){
        if(alfabeto[j]==le[0]){
            r+=alfabeto2[j];
            return r;
        }
    }
}
string Enigma::rotor3(string le ){
    string r;
    for(int j=0;j<alfabeto.size();j++){
        if(alfabeto[j]==le[0]){
            r+=alfabeto3[j];
            return r;
        }
    }
}
string Enigma::refle(string le){
    string r;
    for(int j=0;j<refl.size();j++){
        if(refl[j]==le[0]){
            r+=refl[j+1];

            return r;
        }
    }
}
