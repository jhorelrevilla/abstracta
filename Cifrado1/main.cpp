#include <iostream>
#include "Cesar.h"
#include<string.h>
using namespace std;

int main(){
    string mensaje="ABCDEFGHIJKLMNOPQRSTUVXYZ";
    Cesar emisor(3);
    cout<<mensaje<<endl;
    string pal=emisor.cifrar(mensaje);
    cout<<pal<<endl;
    pal=emisor.descifrar(pal);
    cout<<pal;
    return 0;
}


