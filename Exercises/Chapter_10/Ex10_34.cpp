#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    const vector numbers = {1, 2, 3, 4, 5};
    for(auto iter = numbers.crbegin(); iter != numbers.crend(); ++iter)
        cout << *iter << ' ';
    cout << '\n';
}
