#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using std::cout;
using std::vector;
using std::string;
using std::map;
using std::ranges::for_each;

int main()
{
    map<string, vector<int>> m = {
        {"abc", {1, 2, 3}},
        {"def", {4, 5, 6}}
    };

    auto iter = m.find("abc");
    for_each(iter->second, [](int i)
    {
        cout << i << '\n';
    });

    auto iter_1 = m.lower_bound("z");
    auto iter_2 = m.upper_bound("z");
    auto iter_range = m.equal_range("a");
    // Returns iterators to "abc" because
    // "abc" is the first key not less and greater that "a"
    auto iter_3 = iter_range.first;
    auto iter_4 = iter_range.second;

    cout << (iter_1 == m.end() ? "Off the end" : "Other") << '\n';
    cout << (iter_2 == m.end() ? "Off the end" : "Other") << '\n';
    cout << (iter_3 == m.end() ? "Off the end" : "Other") << '\n';
    cout << (iter_4 == m.end() ? "Off the end" : "Other") << '\n';
}