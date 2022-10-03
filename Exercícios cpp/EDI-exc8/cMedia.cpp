#include "cMedia.h"
#include <iostream>
#include <string>

using namespace std;

cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}

void cMedia::media(){
    float n1, n2, n3;
    
    cout << "Digite a nota 1: ";
    cin >> n1;
    cout << "Digite a nota 2: ";
    cin >> n2;
    cout << "Digite a nota 3: ";
    cin >> n3;
    
    calcMedia(n1,n2,n3);
    
    
}

void cMedia::calcMedia(float n1, float n2, float n3){
    float media;
    string sit;
    
    media = (n1+n2+n3)/3;
    
    if(media>6)
        sit="APROVADO";
    else
        sit="REPROVADO";
    
    cout << "Sua situação é: " << sit;
}