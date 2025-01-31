#include <iostream>
#include <forward_list>
#include <string>

using std::cout;
using std::forward_list;
using std::string;

void func(forward_list<string> &flst, const string &prev_word, const string &new_word)
{
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while(curr != flst.end())
    {
        if(*curr == prev_word)
        {
            flst.insert_after(curr, new_word);
            return;
        }
        prev = curr;
        ++curr;
    }
    flst.insert_after(prev, new_word);
}

int main()
{
    forward_list<string> words = {"fern", "eclipse", "ember", "melody", "harbor"};
    func(words, "other", "vault");

    for(const auto &s : words)
        cout << s << ' ';
    cout << '\n';
}
