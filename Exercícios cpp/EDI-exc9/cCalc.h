#ifndef CCALC_H
#define CCALC_H

class cCalc {
public:
    cCalc();
    cCalc(const cCalc& orig);
    virtual ~cCalc();
    
    void maior();
    float calcMaior(int a, int b, int c);
private:

};

#endif /* CCALC_H */

