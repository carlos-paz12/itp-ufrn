#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, copy = "";
    cin >> str;

    int strLength = str.length();

    for (int i = 0; i < strLength; i++)
    {
        copy += str[(strLength - 1) - i];
    }

    cout << str << "|" << copy << "\n";

    return 0;
}