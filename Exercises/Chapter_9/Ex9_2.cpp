#include <iostream>
#include <vector>
#include <list>
#include <deque>

using std::cout;
using std::vector;
using std::list;
using std::deque;

bool find(vector<int>::iterator beg, vector<int>::iterator end, int value)
{
    while(beg != end)
    {
        if(*beg == value) return true;
        ++beg;
    }
    return false;
}

int main()
{
    // Exercise 9.2

    list<deque<int>> example;

    // Exercise 9.4

    vector vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << (find(vec.begin(), vec.end(), 3) ? "Found" : "Not found") << '\n';
    cout << (find(vec.begin(), vec.end(), 13) ? "Found" : "Not found") << '\n';
}