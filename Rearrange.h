#ifndef REARRANGE_H
#define REARRANGE_H

#include "Individual.h"
#include "Mutator.h"

class Rearrange : public Mutator {
    public:
    Individual mutate(Individual *ind, int k);
    protected:
    Individual *ind;
};
#endif