#include <iostream>
#include <string>
#include <deque>

using std::cin;
using std::cout;
using std::string;
using std::deque;

int main()
{
    deque<string> words;
    string word;
    while(cin >> word)
    {
        words.push_back(word);
    }
    for(auto iter = words.begin(); iter != words.end(); ++iter)
    {
        cout << *iter << '\n';
    }
}