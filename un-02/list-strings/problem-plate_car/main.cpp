#include <iostream>
#include <string>

using namespace std;

int main()
{
    string plate;
    cin >> plate;

    if (plate.length() != 8)
    {
        cout << "não\n";
    }
    else
    {
        bool isHyphen = plate.at(3) == '-';

        if (!isHyphen)
        {
            cout << "não\n";
        }
        else
        {
            for (auto i = plate.begin(); i < plate.begin() + 3; i++)
            {
                int a = *i;
                if (a < 65 || a > 90)
                {
                    cout << "não\n";
                    return 0;
                }
            }
            for (auto j = plate.begin() + 5; j < plate.end(); j++)
            {
                int b = *j;
                if (b < 48 || b > 57)
                {
                    cout << "não\n";
                    return 0;
                }
            }
            cout << "sim\n";
        }
    }

    return 0;
}