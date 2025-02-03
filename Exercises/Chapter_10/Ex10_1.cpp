#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

using std::cout;
using std::vector;
using std::list;
using std::string;
using std::count;

int main()
{
    // Exercise 10.1

    vector numbers = {1, 2, 3, 4, 4, 5, 6, 7, 3, 3, 3, 8, 9, 10};
    cout << count(numbers.begin(), numbers.end(), 4) << '\n';
    cout << std::ranges::count(numbers, 4) << '\n'; // new in C++20

    // Exercise 10.2

    list<string> words = {"abc", "def", "ghi", "def", "def"};
    cout << count(words.begin(), words.end(), "def") << '\n';
    cout << std::ranges::count(words, "def") << '\n';
}
