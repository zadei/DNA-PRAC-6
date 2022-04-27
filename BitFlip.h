#ifndef BITFLIP_H
#define BITFLIP_H

class BitFlip : public Mutator {
    public:
    BitFlip();
    virtual mutate(Individual ind, int k);
};
#endif