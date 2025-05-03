#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::pair;
using std::string;
using std::vector;
using std::ranges::for_each;

int main()
{
    vector<pair<string, int>> pairs;

    string s;
    int i;
    while(cin >> s >> i)
    {
        // The best way
        pairs.emplace_back(s, i);

        // Other approaches
        //pairs.push_back({s, i});
        //pairs.push_back(pair<string, int>(s, i));
        //pairs.push_back(std::make_pair(s, i));
    }

    // Using lambda
    for_each(pairs, [](const auto &pair)
    {
        cout << pair.first << ' ' << pair.second << '\n';
    });

    cout << '\n';

    // The same thing using structured bindings and normal range-based for loop
    for(const auto &[first, second] : pairs)
    {
        cout << first << ' ' << second << '\n';
    }
}