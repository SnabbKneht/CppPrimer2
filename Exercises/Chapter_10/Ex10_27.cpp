#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <algorithm>

using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::list;
using std::ranges::unique_copy;
using std::ranges::sort;
using std::ranges::for_each;
using std::back_inserter;

int main()
{
    vector<string> words;
    string word;
    while(cin >> word)
        words.push_back(word);

    list<string> words_copy;
    sort(words);
    unique_copy(words, back_inserter(words_copy));

    for_each(words_copy, [](const string &s) { cout << s << ' '; });
    cout << '\n';
}
