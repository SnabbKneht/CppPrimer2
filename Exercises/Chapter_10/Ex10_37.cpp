#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using std::cout;
using std::vector;
using std::list;
using std::ranges::for_each;

int main()
{
    vector vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list lst(vec.crbegin() + 2, vec.crend() - 3);
    for_each(lst, [](auto i) { cout << i << '\n'; });
}
