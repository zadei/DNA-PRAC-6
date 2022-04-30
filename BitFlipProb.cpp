// the mutate function in this class goes through every digit in the binary string
// and "flips" each of the binary digit with probability 'p'.
// The probability 'p' is of type double and in the range of (0,1)
// 'p' should be given as a parameter of the constructor

#include "BitFlipProb.h"
#include "Individual.h"

BitFlipProb::BitFlipProb(double p) {
    this->p = p;
}

Individual BitFlipProb::mutate(Individual *ind, int k) {
    this->ind = ind;
    this->k = k;
    int length = ind->getLength();

    for (int i = 0; i < length; i++) {
        // flips bit based on probability supplied in constructor
        if (p > 0.5 && p < 1) {
            ind->flipBit(i);
        }
        else if (p > 0 && p < 0.5) {
            // do nothing
        }
            
    }
    return ind->getString();
}