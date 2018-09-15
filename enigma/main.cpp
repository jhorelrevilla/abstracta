#include <string.h>
#include <iostream>
#include "Enigma.h"
using namespace std;

int main(){
    Enigma emi("A","A","A");
    //emi.add_steckers("AN");
    string a=emi.co("AAAAAAAAAAAAAAAAAAAAAAA");
    cout<<a<<endl;
    Enigma rece("A","A","A");
    string b=rece.deco(a);
    cout<<b<<endl;
    return 0;
}
