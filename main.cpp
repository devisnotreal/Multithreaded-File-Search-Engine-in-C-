
#include <iostream>
#include <filesystem>
using namespace std;
namespace fs = filesystem;

int main()
{

    string path = "documents";

    if (!fs::exists(path))
    {
        cout << "Folder does not exist!";
        return 0;
    }

    for (auto entry : fs::directory_iterator(path))
    {

        if (entry.is_regular_file() &&
            entry.path().extension() == ".txt")
        {

            cout << entry.path().filename() << endl;
        }
    }

    for (auto entry : fs::directory_iterator(path))
    {
        cout << entry.path().filename() << endl;
    }

    // date:-13-11-2026
    return 0;
}
