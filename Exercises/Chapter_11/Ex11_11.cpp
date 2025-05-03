#include "chemical_element.h"
#include "state_of_matter.h"
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using std::cout;
using std::set;
using std::vector;
using std::ranges::sort;
using std::ranges::for_each;

bool compare_elements(const chemical_element &lhs, const chemical_element &rhs)
{
    return lhs.atomic_number < rhs.atomic_number;
}

int main()
{
    chemical_element iron("Iron", "Fe", 26, state_of_matter::SOLID, 7.874);
    chemical_element carbon("Carbon", "C", 6, state_of_matter::SOLID, 2.266);
    chemical_element hydrogen("Hydrogen", "H", 1, state_of_matter::GAS, 0.076);

    // A custom comparator is needed because chemical_element class does not have < operator,
    // so a set of this type cannot be created, unless some comparator is provided

    // Approach using decltype and function pointer
    set<chemical_element, decltype(compare_elements)*> elements(compare_elements);

    // The same thing with explicit type
    // bool (*) (const chemical_element&, const chemical_element&) = a pointer to function that returns bool and
    // takes two parameters of type const chemical_element&
    //set<chemical_element, bool (*) (const chemical_element&, const chemical_element&)> elements(compare_elements);

    elements.insert({iron, carbon, hydrogen});

    for(const auto &elem : elements)
    {
        cout << elem.name << '\n';
    }
    cout << '\n';

    vector elements2 {iron, carbon, hydrogen};

    auto comparator_by_atomic_number = [](const chemical_element &lhs, const chemical_element &rhs) {
        return lhs.atomic_number < rhs.atomic_number;
    };

    auto comparator_by_name = [](const chemical_element &lhs, const chemical_element &rhs) {
        return lhs.name < rhs.name;
    };

    sort(elements2, comparator_by_atomic_number);
    for_each(elements2, [](const auto &elem) { cout << elem.name << '\n'; });
    cout << '\n';

    sort(elements2, comparator_by_name);
    for_each(elements2, [](const auto &elem) { cout << elem.name << '\n'; });
}