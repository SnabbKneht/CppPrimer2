#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::istream_iterator;
using std::ostream_iterator;
using std::ranges::sort;
using std::copy;
using std::vector;
using std::back_inserter;

int main()
{
    vector<int> numbers;
    istream_iterator<int> in(cin);
    istream_iterator<int> end;
    copy(in, end, back_inserter(numbers));
    sort(numbers);
    ostream_iterator<int> out(cout, " ");
    std::ranges::copy(numbers, out);
}
