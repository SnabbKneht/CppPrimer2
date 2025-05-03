#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <list>
#include <sstream>
#include <algorithm>
#include <iterator>

using std::cout;
using std::ifstream;
using std::string;
using std::getline;
using std::map;
using std::list;
using std::istringstream;
using std::for_each;
using std::istream_iterator;

int main()
{
    ifstream file("text2.txt");

    map<string, list<int>> line_occurrences;

    string line;
    for(int line_number = 1; getline(file, line); ++line_number)
    {
        istringstream iss(line);
        istream_iterator<string> iter(iss);
        istream_iterator<string> end;

        for_each(iter, end, [&line_occurrences, line_number](const string &word) {
            line_occurrences[word].push_back(line_number);
        });
    }

    for(const auto &[word, lines] : line_occurrences)
    {
        cout << word << ": ";
        for(int i : lines)
        {
            cout << i << ' ';
        }
        cout << '\n';
    }

    file.close();
}