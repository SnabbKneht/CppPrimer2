#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "families_container.h"

using std::cout;
using std::map;
using std::string;
using std::vector;

int main()
{
    families_container families;
    families.add_family("Stark", {
        {"Sansa", 1},
        {"Arya", 2}
    });
    families.add_family("Lannister", {
        {"Tyrion", 3},
        {"Jaime", 4}
    });
    families.add_family("Lannister", {
        {"Cersei", 5}
    });
    families.add_family("Stark", {
        {"Robb", 6},
        {"Rickon", 7}
    });
    families.add_family("Targaryen", {
        {"Daenerys", 8},
        {"Viserys", 9},
        {"Rhaegar", 10}
    });

    // Older approach (for version without pairs)
    // for(const auto &pair : families.get_families())
    // {
    //     cout << pair.first << '\n';
    //     for(const string &child : pair.second)
    //     {
    //         cout << '\t' << child << '\n';
    //     }
    // }

    // Newer approach using structured bindings
    for(const auto &[house, children] : families.get_families())
    {
        cout << house << '\n';
        for(const auto &pair : children)
        {
            cout << '\t' << pair.first << ' ' << pair.second << '\n';
        }
    }
}