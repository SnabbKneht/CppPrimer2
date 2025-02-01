#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::cout;
using std::istream;
using std::ifstream;
using std::vector;
using std::string;

void populate(vector<string> &svec, istream &is)
{
    svec.reserve(1024);
    string word;
    while(is >> word)
    {
        svec.push_back(word);
    }
    svec.resize(svec.size() + svec.size() / 2);
}

int main()
{
    vector<string> svec_256;
    ifstream file_in("words_256.txt");
    populate(svec_256, file_in);
    file_in.close();
    cout << "Capacity: " << svec_256.capacity() << " Expected: " << 1024 << '\n';
    cout << "Size: " << svec_256.size() << " Expected: " << 384 << '\n';

    vector<string> svec_512;
    file_in.open("words_512.txt");
    populate(svec_512, file_in);
    file_in.close();
    cout << "Capacity: " << svec_512.capacity() << " Expected: " << 1024 << '\n';
    cout << "Size: " << svec_512.size() << " Expected: " << 768 << '\n';

    vector<string> svec_1000;
    file_in.open("words_1000.txt");
    populate(svec_1000, file_in);
    file_in.close();
    cout << "Capacity: " << svec_1000.capacity() << " Expected: " << 2048 << '\n';
    cout << "Size: " << svec_1000.size() << " Expected: " << 1500 << '\n';

    vector<string> svec_1048;
    file_in.open("words_1048.txt");
    populate(svec_1048, file_in);
    file_in.close();
    cout << "Capacity: " << svec_1048.capacity() << " Expected: " << 2048 << '\n';
    cout << "Size: " << svec_1048.size() << " Expected: " << 1572 << '\n';
}
