#include <iostream>
#include <sstream>
#include <thread>

using std::istream;
using std::string;
using std::cin;
using std::cout;

istream &read_stream(istream &is)
{
    string s;
    while(std::getline(is, s))
    {
        cout << s << '\n';
    }
    is.clear();
    return is;
}

int main()
{
    std::istringstream iss("Hello\nWorld\n123\n456\n");
    read_stream(iss);
}
