#ifndef BITFLIP_H
#define BITFLIP_H
#include "Mutator.h"
#include "Individual.h"

class BitFlip : public Mutator {
    public:
    //BitFlip();
    void mutate(Individual *ind, int k);
    int elementChanged(Individual *ind, int k);
    protected:
    int flipNo;
};
#endif