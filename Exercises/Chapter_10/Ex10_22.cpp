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
using std::ranges::count_if;
using std::bind;
using std::placeholders::_1;

bool is_shorter_or_equal(const string &s, int i)
{
    return s.size() <= i;
}

int main()
{
    int max_size = 6;
    vector<string> words;
    ifstream in("words.txt");
    string word;
    while(in >> word)
        words.push_back(word);
    in.close();

    // Lambda approach (preferred)
    auto count = count_if(words,
        [max_size](const string &s)
        { return s.size() <= max_size; });
    cout << count << '\n';

    // Function with bind approach
    count = count_if(words, bind(is_shorter_or_equal, _1, max_size));
    cout << count << '\n';
}
