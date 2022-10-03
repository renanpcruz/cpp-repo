#include "cCalc.h"
#include <iostream>

using namespace std;

cCalc::cCalc() {
}

cCalc::cCalc(const cCalc& orig) {
}

cCalc::~cCalc() {
}

void cCalc::maior(){
    int a,b,c;
    
    cout << "Digite um número: ";
    cin >> a;
    cout << "Digite um número: ";
    cin >> b;
    cout << "Digite um número: ";
    cin >> c;
    
    cout << calcMaior(a,b,c) << " é maior";
}

float cCalc::calcMaior(int a, int b, int c){
    int maior=0;
    
    if((a > b) && (a > c)){
        maior = a;
    }else{
        if((b>a) && (b>c)){
            maior = b;
        } else{
            c = maior;
        }
    }
    
    return maior;
}