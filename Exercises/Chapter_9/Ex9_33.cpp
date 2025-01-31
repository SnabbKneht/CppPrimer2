#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    vector vec = {1, 2, 3, 4, 5};
    auto begin = vec.begin();
    while(begin != vec.end())
    {
        ++begin;
        begin = vec.insert(begin, 42);
        ++begin;
    }

    for(auto i : vec)
        cout << i << ' ';
    cout << '\n';
}
