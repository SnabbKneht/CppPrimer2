#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::list;
using std::string;
using std::ranges::for_each;

void sort_and_elim_dups(list<string> &words)
{
    words.sort();
    words.unique();
}

int main()
{
    list<string> sentence;
    string word;
    while(cin >> word)
    {
        sentence.push_back(word);
    }

    sort_and_elim_dups(sentence);
    for_each(sentence, [](auto &s) { cout << s << '\n'; });
}