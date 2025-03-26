#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using std::cout;
using std::list;
using std::find;
using std::distance;

int main()
{
    const list numbers = {1, 0, 2, 0, 3};
    const auto iter = find(numbers.crbegin(), numbers.crend(), 0);
    if(iter == numbers.crend())
    {
        cout << "No 0 found.\n";
        return -1;
    }
    const auto index = distance(iter, numbers.crend()) - 1;
    cout << "The last 0 is at index " << index << '\n';

    return 0;
}
