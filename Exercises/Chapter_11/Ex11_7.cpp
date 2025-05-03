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
    families.add_family("Stark", {"Sansa", "Arya"});
    families.add_family("Lannister", {"Tyrion", "Jaime"});
    families.add_family("Lannister", {"Cersei"});
    families.add_family("Stark", {"Robb", "Rickon"});
    families.add_family("Targaryen", {"Daenerys", "Viserys", "Rhaegar"});

    // Older approach
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
        for(const string &child : children)
        {
            cout << '\t' << child << '\n';
        }
    }
}