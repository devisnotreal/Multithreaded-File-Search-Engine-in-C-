#include <bits/stdc++.h>
#include <fstream>
using namespace std;
// date :- 09-11-2026
// we focus on building from now maybe it's too basic maybe its not even that good
// but building consistently is what matters.
// also gonna note things

int main()
{
    // to open file.

    fstream filevar("sample.txt");

    // to see if the file exist or not.

    if (!filevar.is_open())
    {
        cout << "File not found!" << "\n";
        return 0;
    }
    // we search a word from the txt file.
    string line;
    string word = "C++";
    while (getline(filevar, line))
    {
        if (line.find(word) != string::npos)
        {
            cout << line << '\n';
        }
    }
    // closes the file
    filevar.close();

    return 0;
}