#ifndef CFABRICA_H
#define CFABRICA_H

class cFabrica {
public:
    
    cFabrica();
    cFabrica(const cFabrica& orig);
    virtual ~cFabrica();
    
    void tempo();
    float calcTempo(float sec);
private:

};

#endif /* CFABRICA_H */

