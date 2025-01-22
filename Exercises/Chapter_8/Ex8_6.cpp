#include <fstream>
#include <iostream>
#include <string>

#include "sales_data.h"

using std::cout;
using std::cerr;
using std::string;
using std::ifstream;

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        cerr << "Error: No file argument provided.\n";
        return -1;
    }

    string file_path = argv[1];

    ifstream in(file_path);
    if(!in)
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
            cout << total.to_string() << '\n';
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
    cout << total.to_string() << '\n';

    return 0;
}
