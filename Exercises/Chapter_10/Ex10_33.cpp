#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using std::cout;
using std::cerr;
using std::ifstream;
using std::ofstream;
using std::vector;
using std::string;
using std::copy;
using std::istream_iterator;
using std::ostream_iterator;
using std::back_inserter;
using std::ranges::for_each;
using std::ranges::partition;

int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        cerr << "Invalid number of arguments.\n";
        return -1;
    }
    const string in_path = argv[1];
    const string out_odd_path = argv[2];
    const string out_even_path = argv[3];

    vector<int> numbers;
    ifstream in_stream(in_path);
    istream_iterator<int> in_iter(in_stream);
    istream_iterator<int> end_iter;
    copy(in_iter, end_iter, back_inserter(numbers));
    in_stream.close();

    auto first_even = partition(numbers,
        [](int i) { return i % 2 != 0; }).begin();

    ofstream out_odd_stream(out_odd_path);
    ofstream out_even_stream(out_even_path);
    ostream_iterator<int> out_odd_iter(out_odd_stream, " ");
    ostream_iterator<int> out_even_iter(out_even_stream, "\n");
    copy(numbers.begin(), first_even, out_odd_iter);
    copy(first_even, numbers.end(), out_even_iter);
    out_odd_stream.close();
    out_even_stream.close();
}
