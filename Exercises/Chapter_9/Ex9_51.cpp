#include <iostream>
#include "date.h"

using std::cout;

void print_date(date d)
{
    cout << d.get_day() << ' ' << d.get_month() << ' ' << d.get_year() << '\n';
}

int main()
{
    date d1("3/10/2000");
    print_date(d1);

    date d2("31.12.2024");
    print_date(d2);
}
