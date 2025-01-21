#include <iostream>
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
    read_stream(cin);
    cout << "Press enter to exit.\n";
    cin.get();
}
