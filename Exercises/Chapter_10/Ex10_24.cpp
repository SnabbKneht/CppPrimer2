#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>

using std::cout;
using std::vector;
using std::string;
using std::bind;
using std::ranges::find_if;
using std::placeholders::_1;

bool is_shorter(const string &s, int i)
{
    return s.size() < i;
}

int main()
{
    vector numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto iter = find_if(numbers, bind(is_shorter, "test", _1));
    if(iter != numbers.end())
        cout << *iter << '\n';

    // Using lambda
    auto iter2 = find_if(numbers,
        [](int i) { return string("test").size() < i; });
    if(iter2 != numbers.end())
        cout << *iter2 << '\n';

    // With captured variable
    string s = "test";
    auto iter3 = find_if(numbers,
        [s](int i) { return s.size() < i; });
    if(iter3 != numbers.end())
        cout << *iter3 << '\n';
}
