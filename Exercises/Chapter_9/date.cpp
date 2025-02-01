#include "date.h"

using std::string;

date::date(const std::string &s)
{
    auto sep1_pos = s.find_first_of(date::separators);
    auto sep2_pos = s.find_last_of(date::separators);
    day = std::stoul(s.substr(0, sep1_pos));
    month = std::stoul(s.substr(sep1_pos + 1, 2));
    year = std::stoul(s.substr(sep2_pos + 1));
}
