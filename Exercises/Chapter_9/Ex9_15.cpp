#include <iostream>
#include <vector>

using std::cout;
using std::vector;

bool are_equal(const vector<int> &a, const vector<int> &b)
{
    return a == b;
}

int main()
{
    vector<int> v1 = {1, 1, 1, 1, 1};
    vector<int> v2(5, 1);
    cout << (are_equal(v1, v2) ? "True" : "False") << '\n';
}