#include "Enigma.h"

Enigma::Enigma(string A,string B,string C){
    clave1=alfabeto.find(A);
    clave2=alfabeto.find(B);
    clave3=alfabeto.find(C);
}
void Enigma::add_steckers(string a){
    steckers+=a;
}
int Enigma::modulo(int a,int b){
    int co=a/b;
    int re=a-(co*b);
    if(re<0){
        re+=b;
    }
    return re;
}
string Enigma::co(string mens){
    string result;
    string let;
    for(int i=0;i<mens.size();i++){
        int op=steckers.find(mens[i]);
        if(op>=0){
            mens[i]=steckers[modulo(op+1,2)];
        }
    }
    for(int i=0; i<mens.size();i++){
        let=mens[i];
        let=rotor3(let,false);
        let=rotor2(let,false);
        let=rotor1(let,false);
        let=refle(let);
        ///////////////////////////////
        let=rotor1(let,true);
        let=rotor2(let,true);
        result+=rotor3(let,true);

    }
    return result;
}
string Enigma::deco(string mens){
    string result;
    string let;
    for(int i=0;i<mens.size();i++){
        int op=steckers.find(mens[i]);
        if(op>=0){
            mens[i]=steckers[modulo(op+1,2)];
        }
    }
    for(int i=0; i<mens.size();i++){
        let=mens[i];
        let=rotor3(let,false);
        let=rotor2(let,false);
        let=rotor1(let,false);
        let=refle(let);
        ///////////////////////////////
        let=rotor1(let,true);
        let=rotor2(let,true);
        result+=rotor3(let,true);

    }
    return result;
}
string Enigma::rotor1(string le,bool x=false){
    int palabra;
    string r;
    if(x==true ){
        palabra=alfabeto.find(le[0]);
        if(palabra== 17 && clave1==0){
            r+=alfabeto1[modulo(palabra-1,26)];
            cout<<r;
            return r;
        }
        palabra=modulo(palabra+clave1,26);
        palabra=alfabeto1.find(alfabeto[palabra]);
        r+=alfabeto[palabra];
        cout<<r;
        return r;
    }
    palabra=alfabeto.find(le[0]);
    r+=alfabeto1[modulo(palabra+clave1,26)];
    cout<<r;
    return r;
}
string Enigma::rotor2(string le,bool x=false){
    int palabra;
    string r;
    if(x==true){
        palabra=alfabeto.find(le[0]);
        /*if(palabra==5 && clave2==0){
            r+=alfabeto1[modulo(palabra-1,26)];
            return r;
        }
        */

        palabra=modulo(palabra+clave2,26);
        palabra=alfabeto2.find(alfabeto[palabra]);
        r+=alfabeto[palabra];
        cout<<r;
        return r;
    }
    if(clave2 == modulo(alfabeto.find(pivote2),26)){
            clave1++;
    }
    palabra=alfabeto.find(le[0]);
    palabra=modulo(palabra-(clave3+clave2),26);
    r+=alfabeto2[palabra];
    cout<<r;
    return r;
}
string Enigma::rotor3(string le,bool x=false){
    int palabra;
    string r;
    if(x==true){
        palabra=alfabeto.find(le[0]);
        /*if(palabra==21 && clave3==0){
            r+=alfabeto1[modulo(palabra-1,26)];
            return r;
        }
        */
        palabra=modulo(palabra+clave3,26);
        palabra=alfabeto3.find(alfabeto[palabra]);
        r+=alfabeto[modulo(palabra-clave3,26)];
        cout<<r<<endl;
        return r;
    }
    if(clave3 == modulo(alfabeto.find(pivote3),26)){
        clave2++;
    }
    cout<<"rotor 3"<<alfabeto[clave3]<<endl;
    cout<<"                           "<<endl;
    palabra=alfabeto.find(le[0]);
    clave3++;
    palabra=modulo(palabra+clave3,26);
    r+=alfabeto3[palabra];
    cout<<r;
    return r;
}
string Enigma::refle(string le){
    string r;
    int palabra;
    for(int i=0;i<le.size();i++){
        palabra=refl.find(le[i]);
        if(palabra==1 ||palabra==3 ||palabra==5 ||palabra==7 ||palabra==9 ||palabra==11 ||palabra==13 ||palabra==15 ||palabra==17 ||palabra==19 ||palabra==21 ||palabra==23 ||palabra==25 ){
            r+=refl[modulo(palabra-1,26)];
        }

        else
            r+=refl[modulo(palabra+1,26)];
    }
    cout<<r;
    return r;
}

