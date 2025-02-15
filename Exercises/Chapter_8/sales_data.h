#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

class sales_data
{
    public:
        sales_data() = default;
        explicit sales_data(const std::string &book_no) : book_no(book_no) {}
        sales_data(const std::string &book_no, int units_sold, double revenue) : book_no(book_no), units_sold(units_sold), revenue(revenue) {}
        explicit sales_data(std::istream &is);

        void add(const sales_data &data);
        const std::string &get_book_no() const { return book_no; }
        int get_units_sold() const { return units_sold; }
        double get_revenue() const { return revenue; }
        std::string to_string() const;

    private:
        std::string book_no;
        int units_sold = 0;
        double revenue = 0.0;

        double get_average_price() const { return revenue / units_sold; }
};

#endif //SALES_DATA_H
