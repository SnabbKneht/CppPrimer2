#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::vector;
using std::partition;

bool has_at_least_five_chars(const string &s)
{
    return s.size() >= 5;
}

int main()
{
    vector<string> words;

    string in;
    while(cin >> in)
        words.push_back(in);

    cout << "Before partition:\n\n";
    for(const auto &w : words)
        cout << w << '\n';

    auto iter = partition(words.begin(), words.end(), has_at_least_five_chars);
    words.erase(iter, words.end());

    cout << "\nAfter partition:\n\n";
    for(const auto &w : words)
        cout << w << '\n';
}
