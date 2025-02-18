#include "Sales_item.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <string>

using std::cout;
using std::ifstream;
using std::vector;
using std::ranges::copy;
using std::istringstream;
using std::string;
using std::ranges::sort;
using std::find_if_not;
using std::accumulate;

bool compare_isbn(const Sales_item &a, const Sales_item &b)
{
    return a.isbn() < b.isbn();
}

int main()
{
    vector<Sales_item> all_data;
    ifstream in("books_data.txt");
    string line;
    while(getline(in, line))
    {
        istringstream iss(line);
        all_data.emplace_back(iss);
    }
    sort(all_data, compare_isbn);

    if(all_data.empty()) return -1;
    auto iter = all_data.begin();
    while(iter != all_data.end())
    {
        auto next = find_if_not(iter, all_data.end(),
            [iter](const Sales_item &si) { return si.isbn() == iter->isbn(); });
        auto sum = accumulate(iter, next, Sales_item(iter->isbn()));
        cout << sum << '\n';
        iter = next;
    }
}
