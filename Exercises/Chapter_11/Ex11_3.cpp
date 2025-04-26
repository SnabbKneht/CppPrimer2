#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <algorithm>

using std::cout;
using std::map;
using std::string;
using std::ifstream;
using std::istream_iterator;
using std::ranges::for_each;
using std::pair;

int main()
{
    map<string, int> word_count;

    ifstream in("text.txt");
    for(istream_iterator<string> iter(in); iter != istream_iterator<string>(); ++iter)
    {
        ++word_count[*iter];
    }
    in.close();

    for_each(word_count, [](auto &elem) { cout << elem.first << " - " << elem.second << '\n'; });
}