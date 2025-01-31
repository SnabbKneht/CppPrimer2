#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::vector;
using std::list;
using std::begin;
using std::end;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector vec(begin(ia), end(ia));
    list lst(begin(ia), end(ia));

    auto iter_l = lst.begin();
    while(iter_l != lst.end())
    {
        if(*iter_l % 2 != 0)
            iter_l = lst.erase(iter_l);
        else
            ++iter_l;
    }

    auto iter_v = vec.begin();
    while(iter_v != vec.end())
    {
        if(*iter_v % 2 == 0)
            iter_v = vec.erase(iter_v);
        else
            ++iter_v;
    }

    for(auto i : lst)
        cout << i << ' ';
    cout << '\n';

    for(auto i : vec)
        cout << i << ' ';
    cout << '\n';
}
