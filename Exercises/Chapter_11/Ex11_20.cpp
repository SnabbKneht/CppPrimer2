#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>

using std::cout;
using std::ifstream;
using std::string;
using std::vector;
using std::istream_iterator;
using std::for_each;
using std::map;

int main()
{
    map<string, int> word_count;

    ifstream in_file("text2.txt");
    istream_iterator<string> beg(in_file);
    istream_iterator<string> end;

    for_each(beg, end, [&word_count](const string &word)
    {
        auto [iter, is_new_word] = word_count.insert({word, 1});
        if(!is_new_word)
        {
            ++iter->second;
        }
    });

    for(const auto &[word, count] : word_count)
    {
        cout << word << " - " << count << '\n';
    }

    in_file.close();
}