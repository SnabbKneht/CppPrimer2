#include <iostream>
#include <vector>

using std::cout;
using std::vector;

void print_info(const vector<int> &v)
{
    cout << "Size: " << v.size() << " Capacity: " << v.capacity() << '\n';
}

int main()
{
    vector<int> v;
    print_info(v);

    for(int i = 0; i < 10; ++i)
        v.push_back(i);
    print_info(v);

    for(int i = 0; i < 6; ++i)
        v.push_back(i);
    print_info(v);

    v.push_back(0);
    print_info(v);

    v.shrink_to_fit();
    print_info(v);

    v.reserve(45);
    print_info(v);

    for(int i = 0; i < 30; ++i)
        v.push_back(i);
    print_info(v);
}
