#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
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
}
