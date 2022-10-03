#include "cFabrica.h"
#include <iostream>

using namespace std;

cFabrica::cFabrica() {
}

cFabrica::cFabrica(const cFabrica& orig) {
}

cFabrica::~cFabrica() {
}

void cFabrica::tempo(){
    float sec=0;
    
    cout << "Digite quantos segundos voce ficou na fabrica: ";
    cin >> sec;
    
    calcTempo(sec);
}

float cFabrica::calcTempo(float sec){
    float mins, horas;
    
    mins = sec / 60;
    horas = sec / 3600;
    
    cout << "São " << horas << " horas, e " << mins << " minutos.";
}