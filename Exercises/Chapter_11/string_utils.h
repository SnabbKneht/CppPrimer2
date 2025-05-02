#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <string>
#include <unordered_set>

class string_utils
{
    public:
        static void to_lower(std::string &s);
        static void clear_punctuation_marks(std::string &s);

    private:
        inline static const std::unordered_set<char> punctuation_marks =
            {'!', '(', ')', '-', ';', ':', '\'', '"', ',', '.', '?', '/'};
};

#endif //STRING_UTILS_H
