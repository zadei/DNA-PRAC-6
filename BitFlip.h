#ifndef BITFLIP_H
#define BITFLIP_H

class BitFlip : public Mutator {
    public:
    BitFlip();
    virtual void mutate(Individual *ind, int k);
    int elementChanged(Individual *ind, int k);
};
#endif