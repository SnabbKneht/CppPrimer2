#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::vector;
using std::count;

int main()
{
    vector numbers = {1, 2, 3, 4, 4, 5, 6, 7, 3, 3, 3, 8, 9, 10};
    cout << count(numbers.begin(), numbers.end(), 4) << '\n';
    cout << std::ranges::count(numbers, 4) << '\n'; // new in C++20
}
