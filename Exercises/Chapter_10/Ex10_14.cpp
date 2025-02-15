#include <iostream>

using std::cout;

int main()
{
    // Exercise 10.14
    cout << "\nExercise 10.14\n\n";

    auto sum = [](int a, int b) { return a + b; };
    cout << sum(5, 3) << '\n';

    // Exercise 10.15
    cout << "\nExercise 10.15\n\n";

    int x = 4;
    cout << [x](int i) { return x + i; }(1) << '\n'; // Inline declaration and call
}
