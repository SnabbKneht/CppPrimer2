#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using std::string;
using std::vector;
using std::getline;
using std::ifstream;
using std::istringstream;

struct person_info
{
    string name;
    vector<string> phones;
};

int main()
{
    string line, word;
    vector<person_info> people;
    ifstream file_in("phone_numbers.txt");

    while(getline(file_in, line))
    {
        person_info info;
        istringstream record(line);
        record >> info.name;
        while(record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
}
