#include <iostream>
#include <list>
#include <deque>

using std::cout;
using std::list;
using std::deque;

int main()
{
    list numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> odd;
    deque<int> even;

    for(auto num : numbers)
    {
        (num % 2 == 0 ? even : odd).push_back(num);
    }

    cout << "Odd:\n";
    for(auto num : odd)
    {
        cout << num << ' ';
    }
    cout << '\n';

    cout << "Even:\n";
    for(auto num : even)
    {
        cout << num << ' ';
    }
    cout << '\n';
}
