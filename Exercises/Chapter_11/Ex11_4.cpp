#include "string_utils.h"
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <map>

using std::cout;
using std::cerr;
using std::string;
using std::ifstream;
using std::for_each;
using std::istream_iterator;
using std::map;

int main()
{
    ifstream in("text.txt");
    if(!in)
    {
        cerr << "Could not read a file." << std::endl;
        return -1;
    }

    map<string, int> word_counter;

    istream_iterator<string> iter(in);
    istream_iterator<string> end;

    for_each(iter, end, [&word_counter](const string &word)
    {
        const string &formatted_word = string_utils::clear_punctuation_marks(string_utils::to_lower(word));
        ++word_counter[formatted_word];
    });

    // older approach using std::pair
    std::ranges::for_each(word_counter, [](const auto &pair)
    {
        cout << pair.first << " - " << pair.second << '\n';
    });

    // newer approach using structured bindings (could not get this to work, compiler probably did not support it yet)
    // std::ranges::for_each(word_counter, [](const auto &[key, value])
    // {
    //     cout << key << " - " << value << '\n';
    // });

    in.close();
    return 0;
}
