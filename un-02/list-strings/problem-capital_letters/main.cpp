#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0 || str[i - 1] == ' ')
        {
            if (str[i] / 32 == 3)
            {
                str[i] = str[i] - 32;
            }
        }
        else
        {
            if (str[i] / 32 == 2)
            {
                str[i] = str[i] + 32;
            }
        }
    }

    cout << str << "\n";

    return 0;
}