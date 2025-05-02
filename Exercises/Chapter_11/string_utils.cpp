#include "string_utils.h"
#include <algorithm>

using std::ranges::for_each;

void string_utils::to_lower(std::string &s)
{
    for_each(s, [](char &c)
    {
        c = tolower(c);
    });
}

void string_utils::clear_punctuation_marks(std::string &s)
{
    auto iter = s.begin();
    while(iter != s.end())
    {
        if(punctuation_marks.contains(*iter))
        {
            iter = s.erase(iter);
        }
        else
        {
            ++iter;
        }
    }
}
