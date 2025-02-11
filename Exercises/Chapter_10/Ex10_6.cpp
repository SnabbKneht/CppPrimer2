#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using std::cout;
using std::fill_n;
using std::vector;
using std::back_inserter;

int main()
{
    vector numbers = {1, 2, 3, 4, 5};
    fill_n(numbers.begin(), numbers.size(), 0);
    for(auto i : numbers)
        cout << i << '\n';
}
