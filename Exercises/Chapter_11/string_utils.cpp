#include "string_utils.h"
#include <algorithm>

using std::string;
using std::ranges::for_each;

string string_utils::to_lower(const std::string &s)
{
    string copy(s);
    for_each(copy, [](char &c)
    {
        c = tolower(c);
    });
    return copy;
}

string string_utils::clear_punctuation_marks(const std::string &s)
{
    string copy = s;
    auto iter = copy.begin();
    while(iter != copy.end())
    {
        if(punctuation_marks.contains(*iter))
        {
            iter = copy.erase(iter);
        }
        else
        {
            ++iter;
        }
    }
    return copy;
}
