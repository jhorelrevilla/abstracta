#include "Cesar.h"

Cesar::Cesar(int a){
    clave=a;
}
int Cesar::modulo(int a,int b){
    int co=a/b;
    int re=a-(co*b);
    if(re<0){
        re+=b;
    }
    return re;
}
string Cesar::cifrar(string pa){
    string mensaje;
    int palabra;
    for(int i=0;i<pa.size();i++){
        palabra=alfabeto.find(pa[i]);
        mensaje+=alfabeto[modulo(palabra+clave,25)];
    }
    return mensaje;
}
string Cesar::descifrar(string pa){
    string mensaje;
    int palabra;
    for(int i=0;i<pa.size();i++){
        palabra=alfabeto.find(pa[i]);
        mensaje+=alfabeto[modulo(palabra-clave,25)];
    }
    return mensaje;
}
