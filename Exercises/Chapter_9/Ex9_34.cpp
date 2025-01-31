#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    vector vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto iter = vec.begin();
    while(iter != vec.end())
    {
        if(*iter % 2)
        {
            iter = vec.insert(iter, *iter);
            ++iter; // infinite loop without this line
        }
        ++iter;
    }

    for(auto i : vec)
        cout << i << ' ';
    cout << '\n';
}
