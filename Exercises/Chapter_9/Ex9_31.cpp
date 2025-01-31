#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

using std::cout;
using std::vector;
using std::list;
using std::forward_list;

void func(vector<int> &vec)
{
    auto iter = vec.begin();
    while(iter != vec.end())
    {
        if(*iter % 2)
        {
            iter = vec.insert(iter, *iter);
            iter += 2;
        }
        else
        {
            iter = vec.erase(iter);
        }
    }
}

void func(list<int> &lst)
{
    auto iter = lst.begin();
    while(iter != lst.end())
    {
        if(*iter % 2)
        {
            lst.insert(iter, *iter);
            ++iter;
        }
        else
        {
            iter = lst.erase(iter);
        }
    }
}

void func(forward_list<int> &flst)
{
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while(curr != flst.end())
    {
        if(*curr % 2)
        {
            flst.insert_after(prev, *curr);
            prev = curr;
            ++curr;
        }
        else
        {
            curr = flst.erase_after(prev);
        }
    }
}

int main()
{
    vector vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list lst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    forward_list flst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    func(vec);
    func(lst);
    func(flst);

    for(auto i : vec)
        cout << i << ' ';
    cout << '\n';

    for(auto i : lst)
        cout << i << ' ';
    cout << '\n';

    for(auto i : flst)
        cout << i << ' ';
    cout << '\n';
}
