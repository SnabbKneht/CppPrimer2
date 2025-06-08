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
}