#include <iostream>
#include <list>
#include <deque>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::list;
using std::deque;
using std::string;
using std::vector;

int main()
{
    // Exercise 9.20
    cout << "\nExercise 9.20\n\n";

    list numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> odd;
    deque<int> even;

    for(auto num : numbers)
    {
        (num % 2 == 0 ? even : odd).push_back(num);
    }

    cout << "Odd:\n";
    for(auto num : odd)
    {
        cout << num << ' ';
    }
    cout << '\n';

    cout << "Even:\n";
    for(auto num : even)
    {
        cout << num << ' ';
    }
    cout << '\n';

    // Exercise 9.21
    cout << "\nExercise 9.21\n\n";

    vector<string> lst;
    string word;
    auto iter = lst.begin();
    while(cin >> word)
    {
        iter = lst.insert(iter, word);
    }

    for(auto &s : lst)
    {
        cout << s << ' ';
    }
    cout << '\n';
}
