#include <iostream>

using std::cout;

int main()
{
    int x = 42;
    auto lambda = [&x] -> bool
    {
        if(x > 0) --x;
        return x != 0;
    };

    while(lambda())
        cout << "Decrementing... x = " << x << '\n';
    cout << "Now x = " << x << '\n';

    lambda();
    cout << "Now x = " << x << '\n';

}
