#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    // Exercise 9.22
    cout << "\nExercise 9.22\n\n";

    vector v = {1, 1, 1, 1, 1, 5, 5, 5, 5, 5};
    int some_val = 1;

    for(auto iter = v.begin(); iter != v.end(); ++iter)
    {
        if(*iter == some_val)
        {
            iter = v.insert(iter, 2 * some_val);
            ++iter;
        }
    }

    for(auto i : v)
    {
        cout << i << ' ';
    }
    cout << '\n';

    // Exercise 9.24
    cout << "\nExercise 9.24\n\n";

    v = {1, 2, 3, 4, 5};
    cout << v.front() << '\n';  // undefined if empty
    cout << *v.begin() << '\n'; // undefined if empty
    cout << v[0] << '\n';       // undefined if empty
    cout << v.at(0) << '\n'; // error if empty
}
