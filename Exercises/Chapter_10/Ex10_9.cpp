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

bool is_shorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

void elim_dups(vector<string> &words)
{
    // sort(words.begin(), words.end()); // old approach
    std::ranges::sort(words); // new C++20 approach

    auto iter = std::ranges::unique(words).begin();

    /* Surprisingly, after calling unique, one of the duplicated words at the end
     * became an empty string. I think there is nothing wrong with it because
     * the values at the end (after the unique sequence) are in an unknown state.
     */

    words.erase(iter, words.end());
}

int main()
{
    vector<string> sentence;
    string word;
    while(cin >> word)
    {
        sentence.push_back(word);
    }

    elim_dups(sentence);
    std::ranges::sort(sentence, is_shorter);

    for(const auto &s : sentence)
        cout << s << ' ';
    cout << '\n';
}
