#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::ifstream;
using std::vector;
using std::string;
using std::istream_iterator;
using std::copy;
using std::ranges::for_each;
using std::back_inserter;

int main()
{
    ifstream file_in("text.txt");
    istream_iterator<string> in_iter(file_in);
    istream_iterator<string> end;
    vector<string> text;
    copy(in_iter, end, back_inserter(text));
    for_each(text, [](const string &s) { cout << s << '\n'; });
}
