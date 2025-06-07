#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::cout;
using std::multimap;
using std::string;
using std::vector;

int main()
{
    multimap<string, vector<string>> families;
    families.insert({"Smith", {"John", "David"}});
    families.insert({"Baker", {"Scott", "Thomas"}});
    families.insert({"Smith", {"Joe", "Martha"}});

    for(const auto &pair : families)
    {
        cout << pair.first << '\n';
        for(const auto &child : pair.second)
        {
            cout << '\t' << child << '\n';
        }
    }
}
