#include "families_container.h"
#include <algorithm>
#include <string>

using std::ranges::for_each;
using std::string;

void families_container::add_family(const std::string &name, const std::vector<std::pair<std::string, int>> &children)
{
    // older approach using range-based for loop
    // for(const string &child : children)
    // {
    //     families[name].push_back(child);
    // }

    // newer approach using append_range function (C++23)
    families[name].append_range(children);
}
