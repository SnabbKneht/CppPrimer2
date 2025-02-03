#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm>

using std::cout;
using std::vector;
using std::accumulate;
using std::string;
using std::equal;

int main()
{
    // Exercise 10.3

    vector numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << accumulate(numbers.cbegin(), numbers.cend(), 0) << '\n';

    // Exercise 10.4

    vector numbers2 = {1.1, 2.1, 3.1, 4.1, 5.1, 6.1, 7.1, 8.1, 9.1, 10.1};
    cout << accumulate(numbers2.cbegin(), numbers2.cend(), 0) << '\n'; // Ok, but values truncated to int
    cout << accumulate(numbers2.cbegin(), numbers2.cend(), 0.0) << '\n'; // Better

    // Exercise 10.5

    vector words1 = {"abc", "def", "ghi"};
    vector words2 = {"abc", "def", "ghi"};
    // Surprisingly yields "Equal" probably due to string literal pooling,
    // but it compares the pointers, not the actual strings
    if(equal(words1.cbegin(), words1.cend(), words2.cbegin()))
        cout << "Equal\n";
    else
        cout << "Not equal\n";
}
