#ifndef CCUSTOFABRICA_H
#define CCUSTOFABRICA_H

class cCustoFabrica {
public:
    cCustoFabrica();
    cCustoFabrica(const cCustoFabrica& orig);
    virtual ~cCustoFabrica();
    
    void custo();
    float calcCusto(float price);
private:

};

#endif /* CCUSTOFABRICA_H */

