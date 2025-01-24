#include <fstream>
#include <iostream>
#include <string>

#include "sales_data.h"

using std::cout;
using std::cerr;
using std::string;
using std::ifstream;
using std::ofstream;

bool are_args_provided(int argc)
{
    if(argc < 2)
    {
        cerr << "Error: No input and output file provided.\n";
        return false;
    }
    if(argc < 3)
    {
        cerr << "Error: No output file provided.\n";
        return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    if(!are_args_provided(argc)) return -1;

    const string input_file_path = argv[1];
    const string output_file_path = argv[2];

    ifstream in(input_file_path);
    ofstream out(output_file_path, std::ios_base::app);
    if(!in || !out)
    {
        cerr << "Error: Cannot open the file.\n";
        return -1;
    }

    sales_data total;
    try
    {
        total = sales_data(in);
    }
    catch(std::runtime_error &err)
    {
        cerr << err.what();
        return -1;
    }

    sales_data trans(in);
    while(true)
    {
        if(total.get_book_no() == trans.get_book_no())
        {
            total.add(trans);
        }
        else
        {
            out << total.to_string() << '\n';
            total = trans;
        }
        try
        {
            trans = sales_data(in);
        }
        catch(std::runtime_error &err)
        {
            break;
        }
    }
    out << total.to_string() << '\n';

    return 0;
}
