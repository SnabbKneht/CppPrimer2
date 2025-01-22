#include "sales_data.h"
#include <stdexcept>
#include <iostream>
#include <string>

using std::invalid_argument;
using std::runtime_error;
using std::cin;
using std::cout;
using std::string;

sales_data::sales_data(std::istream &is)
{
    std::string book_no;
    int units_sold = 0;
    double revenue = 0.0;

    is >> book_no >> units_sold >> revenue;
    if(!is) throw std::runtime_error("Error: Could not parse input to sales_data.");

    this->book_no = book_no;
    this->units_sold = units_sold;
    this->revenue = revenue;
}

void sales_data::add(const sales_data &data)
{
    if(book_no != data.book_no)
        throw invalid_argument("Cannot combine book data with different ISBN.");

    units_sold += data.units_sold;
    revenue += data.revenue;
}

std::string sales_data::to_string() const
{
    return "[" + book_no + " " + std::to_string(units_sold) + " " + std::to_string(revenue) + "]";
}
