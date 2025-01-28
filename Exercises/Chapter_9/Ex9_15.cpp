#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::vector;
using std::list;

bool are_equal(const vector<int> &a, const vector<int> &b)
{
    return a == b;
}

bool are_equal(const list<int> &a, const vector<int> &b)
{
    vector<int> x(a.begin(), a.end());
    return x == b;
}

int main()
{
    vector<int> v1 = {1, 1, 1, 1, 1};
    vector<int> v2(5, 1);
    cout << (are_equal(v1, v2) ? "True" : "False") << '\n';

    list<int> l1(5, 2);
    cout << (are_equal(l1, v1) ? "True" : "False") << '\n';
}
