#include "string_utils.h"
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <iterator>

using std::cout;
using std::string;
using std::ifstream;
using std::for_each;
using std::istream_iterator;

int main()
{
    ifstream in("text.txt");

    for_each(in, [](string &word)
    {
        cout << word << '\n';
    });

    in.close();
}
