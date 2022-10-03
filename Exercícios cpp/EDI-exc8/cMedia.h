#ifndef CMEDIA_H
#define CMEDIA_H

class cMedia {
public:
    cMedia();
    cMedia(const cMedia& orig);
    virtual ~cMedia();
    
    void media();
    void calcMedia(float n1, float n2, float n3);
private:

};

#endif /* CMEDIA_H */

