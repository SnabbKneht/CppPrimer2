#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::cout;
using std::ifstream;
using std::vector;
using std::string;
using std::ranges::sort;
using std::ranges::stable_sort;
using std::unique;
using std::ranges::stable_partition;
using std::ranges::for_each;
using std::bind;
using std::placeholders::_1;

bool is_shorter(const string &a, const string &b)
{
    return a.size() < b.size();
}

bool is_longer_or_equal(const string &s, int i)
{
    return s.size() >= i;
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

    // Lambda approach (preferred)
    auto iter = stable_partition(words, [min_size](const string &s)
        { return s.size() >= min_size; }).begin();
    words.erase(iter, words.end());

    // The same thing using bind, instead of lambda:

    // auto iter = stable_partition(words,
    //     bind(is_longer_or_equal, _1, min_size)).begin();
    // words.erase(iter, words.end());
    
    cout << "There are " << words.size() << " elements with size >= " << min_size << ":\n";
    for_each(words, [](const string &s) { cout << s << ' '; });
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
