#include "../Chapter_8/sales_data.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::ifstream;
using std::istringstream;
using std::vector;
using std::string;
using std::ranges::sort;

bool compare_isbn(const sales_data &sd1, const sales_data &sd2)
{
    return sd1.get_book_no() < sd2.get_book_no();
}

int main()
{
    vector<sales_data> all_data;
    ifstream in("books_data.txt");
    string line;
    while(getline(in, line))
    {
        istringstream iss(line);
        all_data.emplace_back(iss);
    }
    in.close();

    sort(all_data, compare_isbn);

    for(const auto &entry : all_data)
        cout << entry.to_string() << '\n';
}
