// the mutate function in this class goes through every digit in the binary string
// and "flips" each of the binary digit with probability 'p'.
// The probability 'p' is of type double and in the range of (0,1)
// 'p' should be given as a parameter of the constructor

#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Mutator.h"
#include "Individual.h"

class BitFlipProb : public Mutator {
    public:
    BitFlipProb(double p);
    Individual mutate(Individual *ind, int k);
    protected:
    Individual *ind;
    int k;
    double p;
};
#endif