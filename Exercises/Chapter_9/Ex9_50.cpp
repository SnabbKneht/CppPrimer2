#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::vector;
using std::string;

int main()
{
    vector<string> sv;
    string num;
    while(cin >> num)
    {
        sv.push_back(num);
    }

    double sum = 0;
    for(const auto &s : sv)
    {
        sum += std::stod(s);
    }

    cout << "Sum = " << sum << '\n';
}
