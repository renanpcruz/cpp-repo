#include "cCustoFabrica.h"
#include <iostream>

using namespace std;

cCustoFabrica::cCustoFabrica() {
}

cCustoFabrica::cCustoFabrica(const cCustoFabrica& orig) {
}

cCustoFabrica::~cCustoFabrica() {
}

void cCustoFabrica::custo(){
    float price;
    
    cout << "Digite o preco do custo de fábrica: ";
    cin >> price;
    
    cout << "O preço de consumidor é: R$" << calcCusto(price);
}

float cCustoFabrica::calcCusto(float price){
    float pConsumidor;
    
    pConsumidor = price + (price*0.28) + (price*0.45);
    
    return pConsumidor;
}