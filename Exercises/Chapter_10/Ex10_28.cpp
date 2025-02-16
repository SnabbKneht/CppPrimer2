#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using std::cin;
using std::cout;
using std::vector;
using std::deque;
using std::inserter;
using std::back_inserter;
using std::front_inserter;
using std::ranges::copy;
using std::ranges::for_each;

int main()
{
    vector numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> copy_back, copy_front, copy_insert;
    copy(numbers, back_inserter(copy_back));
    copy(numbers, front_inserter(copy_front));
    copy(numbers, inserter(copy_insert, copy_insert.begin()));

    for_each(copy_back, [](int i) { cout << i << ' '; });
    cout << '\n';
    for_each(copy_front, [](int i) { cout << i << ' '; });
    cout << '\n';
    for_each(copy_insert, [](int i) { cout << i << ' '; });
    cout << '\n';

    // Expected output:
    // 1 2 3 4 5 6 7 8 9
    // 9 8 7 6 5 4 3 2 1
    // 1 2 3 4 5 6 7 8 9
}
