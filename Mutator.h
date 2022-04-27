#ifndef MUTATOR_H
#define MUTATOR_H
#include <iostream>
#include <string>
#include "Individual.h"

class Mutator {
    public:
    virtual void mutate(Individual *ind, int k) = 0;
    protected:
    Individual *ind;
    int k;
    
};
#endif