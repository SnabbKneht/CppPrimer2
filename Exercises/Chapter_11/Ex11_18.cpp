#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::map;
using std::string;

int main()
{
    // Exercise 11.18

    map<string, size_t> word_count;
    auto iter = word_count.cbegin(); // type of iter is map<string, size_t>::const_iterator
}