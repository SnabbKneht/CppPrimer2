#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>

using std::cout;
using std::fill_n;
using std::vector;
using std::back_inserter;
using std::list;
using std::copy;

int main()
{
    // Exercise 10.6
    cout << "\nExercise 10.6\n\n";

    vector numbers = {1, 2, 3, 4, 5};
    fill_n(numbers.begin(), numbers.size(), 0);
    for(auto i : numbers)
        cout << i << ' ';
    cout << '\n';

    // Exercise 10.7
    cout << "\nExercise 10.7\n";
    // (a)
    cout << "(a)\n\n";

    vector<int> vec;
    list<int> lst;
    for(int i = 0; i < 10; ++i)
        lst.push_back(i);
    // copy(lst.begin(), lst.end(), back_inserter(vec));
    std::ranges::copy(lst, back_inserter(vec)); // Equivalent C++20 approach

    for(auto i : vec)
        cout << i << ' ';
    cout << '\n';

    // (b)
    cout << "\n(b)\n\n";

    vector<int> vec2;
    // vec2.reserve(10); // WRONG! Only reserves memory, size is still 0
    vec2.resize(10); // OK
    fill_n(vec2.begin(), 10, 3); // Legal because size == 10

    for(auto i : vec2)
        cout << i << ' ';
    cout << '\n';
}
