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
    cout << accumulate(numbers.begin(), numbers.end(), 0) << '\n';
}