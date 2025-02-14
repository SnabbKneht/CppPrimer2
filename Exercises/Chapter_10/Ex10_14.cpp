#include <iostream>

using std::cout;

int main()
{
    auto sum = [](int a, int b) { return a + b; };
    cout << sum(5, 3) << '\n';
}
