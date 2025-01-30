#include <iostream>
#include <string>
#include <deque>
#include <list>

using std::cin;
using std::cout;
using std::string;
using std::deque;
using std::list;

int main()
{
    list<string> words;
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