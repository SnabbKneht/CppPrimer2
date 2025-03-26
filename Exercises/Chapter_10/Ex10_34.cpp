#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    // Exercise 10.34

    const vector numbers = {1, 2, 3, 4, 5};
    for(auto iter = numbers.crbegin(); iter != numbers.crend(); ++iter)
        cout << *iter << ' ';
    cout << '\n';

    // Exercise 10.35

    for(auto iter2 = numbers.cend() - 1; iter2 != numbers.cbegin(); --iter2)
        cout << *iter2 << ' ';
    cout << *numbers.cbegin() << '\n';
}
