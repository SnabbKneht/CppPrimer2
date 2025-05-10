#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>
#include <iterator>

using std::cout;
using std::copy;
using std::multiset;
using std::string;
using std::vector;
using std::inserter;
using std::back_inserter;

int main()
{
    multiset<string> c {"apple", "orange", "cherry", "apple"};
    vector<string> v {"red", "green", "blue", "green"};

    // Legal, copies elements from v to c
    //copy(v.begin(), v.end(), inserter(c, c.end()));

    // Illegal, because multiset does not have push_back function
    //copy(v.begin(), v.end(), back_inserter(c));

    // Legal, copies elements from c to the back of v
    //copy(c.begin(), c.end(), inserter(v, v.end()));

    // Equivalent
    copy(c.begin(), c.end(), back_inserter(v));
    for(const auto elem : v) cout << elem << '\n';
}
