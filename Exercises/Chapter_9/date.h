#ifndef DATE_H
#define DATE_H

#include <string>

class date
{
    public:
        date() = default;
        date(const std::string &);

        unsigned get_year() const { return year; }
        unsigned get_month() const { return month; }
        unsigned get_day() const { return day; }

    private:
        unsigned year = 1;
        unsigned month = 1;
        unsigned day = 1;
        static constexpr std::string separators = "./-";
};

#endif //DATE_H
