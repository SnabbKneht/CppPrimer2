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

vector<int>::iterator ifind(vector<int>::iterator beg, vector<int>::iterator end, int value)
{
    while(beg != end)
    {
        if(*beg == value) return beg;
        ++beg;
    }
    return end;
}

int main()
{
    // Exercise 9.2

    list<deque<int>> example;

    // Exercise 9.4

    vector vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << (find(vec.begin(), vec.end(), 3) ? "Found" : "Not found") << '\n';
    cout << (find(vec.begin(), vec.end(), 13) ? "Found" : "Not found") << '\n';

    // Exercise 9.5

    cout << '\n';
    cout << (ifind(vec.begin(), vec.end(), 3) != vec.end() ? "Found" : "Not found") << '\n';
    cout << (ifind(vec.begin(), vec.end(), 13) != vec.end() ? "Found" : "Not found") << '\n';

    // Exercise 9.10

    vector<int> v1;
    const vector<int> v2;
    auto it1 = v1.begin();
    auto it2 = v2.begin();
    auto it3 = v1.cbegin();
    auto it4 = v2.cbegin();

    // Exercise 9.11

    vector<int> vec1; // initialized as empty
    vector<int> vec2(10); // 10 default-initialized elements (undefined)
    vector<int> vec3(10, 0); // 10 elements initialized to value 0
    vector<int> vec4 = {1, 2, 3, 4, 5}; // list initialization
    vector<int> vec5 = vec4; // copy
    vector<int> vec6(vec5.begin(), vec5.end()); // iterator range

    cout << "\n\nvec1:\n";
    for(auto elem : vec1) cout << elem << ' ';
    cout << "\n\nvec2:\n";
    for(auto elem : vec2) cout << elem << ' ';
    cout << "\n\nvec3:\n";
    for(auto elem : vec3) cout << elem << ' ';
    cout << "\n\nvec4:\n";
    for(auto elem : vec4) cout << elem << ' ';
    cout << "\n\nvec5:\n";
    for(auto elem : vec5) cout << elem << ' ';
    cout << "\n\nvec6:\n";
    for(auto elem : vec6) cout << elem << ' ';
}
