#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::ifstream;
using std::vector;
using std::string;
using std::ranges::sort;
using std::ranges::stable_sort;
using std::unique;
using std::ranges::find_if;

bool is_shorter(const string &a, const string &b)
{
    return a.size() < b.size();
}

void sort_and_elim_dups(vector<string> &words)
{
    sort(words);
    auto iter = std::ranges::unique(words).begin();
    words.erase(iter, words.end());
}

void sort_by_size(vector<string> &words)
{
    // stable_sort(words, is_shorter); // using function
    stable_sort(words, [](const string &a, const string &b)
        { return a.size() < b.size(); }); // using lambda (equivalent)
}

void biggies(vector<string> &words, vector<string>::size_type min_size)
{
    sort_and_elim_dups(words);
    sort_by_size(words);

    // find first element of at least min_size and erase smaller elements
    auto iter = find_if(words, [min_size](const string &s)
        { return s.size() >= min_size; });
    words.erase(words.begin(), iter);

    // print count and elements
    cout << "There are " << words.size() << " elements with size >= " << min_size << ":\n";
    for(const auto &w : words)
        cout << w << ' ';
    cout << '\n';
}

int main()
{
    ifstream in("text.txt");
    vector<string> words;
    string word;
    while(in >> word)
        words.push_back(word);
    in.close();

    biggies(words, 5);
}
