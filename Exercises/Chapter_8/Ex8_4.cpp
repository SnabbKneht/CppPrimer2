#include <fstream>
#include <vector>
#include <string>
#include <iostream>

using std::ifstream;
using std::vector;
using std::string;
using std::cout;
using std::cerr;

int main()
{
    // Exercise 8.4
    cout << "\nExercise 8.4\n\n";

    ifstream in("data.txt");

    if(!in)
    {
        cerr << "Cannot open a file\n";
        return -1;
    }

    vector<string> lines;
    string new_line;
    std::getline(in, new_line);
    while(in)
    {
        lines.push_back(new_line);
        std::getline(in, new_line);
    }

    for(auto &line : lines)
    {
        cout << line << '\n';
    }

    cout << "Number of lines: " << lines.size() << '\n';

    in.close();

    //Exercise 8.5
    cout << "\nExercise 8.5\n\n";

    in.open("data.txt");

    if(!in)
    {
        cerr << "Cannot open a file\n";
        return -1;
    }

    vector<string> words;
    string new_word;
    in >> new_word;
    while(in)
    {
        words.push_back(new_word);
        in >> new_word;
    }

    for(auto &word : words)
    {
        cout << word << '\n';
    }

    cout << "Number of words: " << words.size() << '\n';

    in.close();

    return 0;
}
