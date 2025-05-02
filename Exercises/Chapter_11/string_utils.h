#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <string>
#include <unordered_set>

class string_utils
{
    public:
        static std::string to_lower(const std::string &s);
        static std::string clear_punctuation_marks(const std::string &s);

    private:
        inline static const std::unordered_set<char> punctuation_marks =
            {'!', '(', ')', '-', ';', ':', '\'', '"', ',', '.', '?', '/'};
};

#endif //STRING_UTILS_H
