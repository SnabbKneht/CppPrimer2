#include <iostream>
#include <map>

using std::cout;
using std::map;

int main()
{
    map<int, int> squares;

    for(int i = 1; i <= 20; ++i)
    {
        squares[i] = i*i;
    }

    for(const auto &[a, b] : squares)
    {
        cout << a << " -> " << b << '\n';
    }

    cout << '\n';

    // modifying values using map iterator
    for(auto iter = squares.begin(); iter != squares.end(); ++iter)
    {
        ++iter->second;
    }

    for(const auto &[a, b] : squares)
    {
        cout << a << " -> " << b << '\n';
    }
}