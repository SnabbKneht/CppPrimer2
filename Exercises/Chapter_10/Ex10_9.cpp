#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::unique;
using std::sort;

void elim_dups(vector<string> &words)
{
    // sort(words.begin(), words.end()); // old approach
    std::ranges::sort(words); // new C++20 approach

    cout << "After sorting:\n";
    for(const auto &s : words)
        cout << s << ' ';
    cout << '\n';

    auto iter = std::ranges::unique(words).begin();

    /* Surprisingly one of the duplicated words at the end became an empty string.
     * I think there is nothing wrong with it because the values at the end
     * (after the unique sequence) are in an unknown state.
     */
    cout << "After unique:\n";
    for(auto i = 0; i < words.size(); ++i)
    {
        cout << "Element "  << i << ": " << words[i] << '\n';
    }

    words.erase(iter, words.end());

    cout << "After erasing:\n";
    for(auto i = 0; i < words.size(); ++i)
    {
        cout << "Element "  << i << ": " << words[i] << '\n';
    }
}

int main()
{
    vector<string> sentence;
    string word;
    while(cin >> word)
    {
        sentence.push_back(word);
    }

    cout << "At the beginning:\n";
    for(const auto &s : sentence)
        cout << s << ' ';
    cout << '\n';

    elim_dups(sentence);
}
