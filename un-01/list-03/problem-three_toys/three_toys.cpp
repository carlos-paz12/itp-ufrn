#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    int sum = x + y + z;

    if (sum == 6)
    {
        cout << x << " " << y << " " << z << "\n";
    }
    else if (sum >= 0)
    {
        if (x < 0)
        {
            x = 6 - (y + z);
        }
        else if (y < 0)
        {
            y = 6 - (x + z);
        }
        else
        {
            z = 6 - (x + y);
        }

        cout << x << " " << y << " " << z << "\n";
    }
    else if (sum >= -5 && sum <= 1)
    {
        if (x < 0 && y < 0)
        {
            if ()
            {
                
            }
        }
        else if (x < 0 && z < 0)
        {

        }
        else
        {

        }
    }
    else
    {

    }

    return 0;
}