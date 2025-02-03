#include <iostream>
#include <vector>
#include <numeric>

using std::cout;
using std::vector;
using std::accumulate;

int main()
{
    // Exercise 10.3

    vector numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << accumulate(numbers.cbegin(), numbers.cend(), 0) << '\n';

    // Exercise 10.4

    vector numbers2 = {1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1, 9.1, 10.1};
    cout << accumulate(numbers2.cbegin(), numbers2.cend(), 0) << '\n'; // Ok, but values truncated to int
    cout << accumulate(numbers2.cbegin(), numbers2.cend(), 0.0) << '\n'; // Better
}