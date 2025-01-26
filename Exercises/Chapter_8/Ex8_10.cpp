#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

using std::ifstream;
using std::vector;
using std::string;
using std::cout;

void load_file_to_vector(ifstream &from, vector<string> &to)
{
    string line;
    while(std::getline(from, line))
    {
        to.push_back(line);
    }
}

void print_lines(const vector<string> &lines)
{
    for(int i = 0; i < lines.size(); ++i)
    {
        cout << "Line " << i << ": " << lines[i] << '\n';
    }
}

void print_words(const vector<string> &lines)
{
    for(auto &line : lines)
    {
        std::istringstream iss(line);
        string word;
        while(iss >> word)
        {
            cout << word << '\n';
        }
    }
}

int main()
{
    const string path("text.txt");
    ifstream file_in(path);
    vector<string> lines;
    load_file_to_vector(file_in, lines);

    print_words(lines);
}
