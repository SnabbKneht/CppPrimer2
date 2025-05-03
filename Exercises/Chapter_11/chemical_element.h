#ifndef CHEMICAL_ELEMENT_H
#define CHEMICAL_ELEMENT_H

#include <string>
#include "state_of_matter.h"

struct chemical_element
{
    std::string name;
    std::string symbol;
    int atomic_number = 0;
    state_of_matter state = state_of_matter::SOLID;
    double density = 0.0;

    chemical_element(const std::string &name, const std::string &symbol, int atomic_number, state_of_matter state, double density)
        : name(name),
          symbol(symbol),
          atomic_number(atomic_number),
          state(state),
          density(density) {}
};

#endif //CHEMICAL_ELEMENT_H
