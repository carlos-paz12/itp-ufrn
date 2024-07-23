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
    else if (sum > 0)
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
    else if (x < 0 && y < 0 && z < 0)
    {
        if (x == y && z != x)
        {
            z = -x;
            cout << "? ? " << z << "\n";
        }
        else if (x == z && y != x)
        {
            y = -x;
            cout << "? " << y << " ?\n";
        }
        else if (y == z && x != y)
        {
            x = -y;
            cout << x << " ? ?\n";
        }
        else
        {
            cout << "? ? ?\n";
        }
    }
    else
    {
        if (((x + y) < 0) && z > 0)
        {
            if (x == y)
            {
                cout << "? ? " << z << "\n";
            }
            else
            {
                if (-x == z)
                {
                    int c = -y;
                    x = c;
                    y = 6 - (x + y);
                }
                else if (-y == z)
                {
                    int c = -x;
                    y = c;
                    x = 6 - (y + z);
                }
                else
                {
                    int c = -x;
                    y = c;
                    x = 6 - (y + z);
                }
                cout << x << " " << y << " " << z << "\n";
            }
        }
        else if (((x + z) < 0) && y > 0)
        {
            if (x == z)
            {
                cout << "? " << y << " ?\n";
            }
            else
            {
                if (-x == y)
                {
                    int c = -z;
                    x = c;
                    y = 6 - (x + z);
                }
                else if (-z == y)
                {
                    int c = -x;
                    y = c;
                    x = 6 - (y + z);
                }
                else
                {
                    int w = -x;
                    z = w;
                    x = 6 - (y + z);
                }
                cout << x << " " << y << " " << z << "\n";
            }
        }
        else
        {
            if (y == z)
            {
                cout << x << " ? ?\n";
            }
            else
            {
                if (-y == x)
                {
                    int c = -z;
                    y = c;
                    z = 6 - (x + y);
                }
                else if (-z == x)
                {
                    int c = -y;
                    z = c;
                    y = 6 - (x + z);
                }
                else
                {
                    int c = -y;
                    z = c;
                    y = 6 - (z + x);
                }
                cout << x << " " << y << " " << z << "\n";
            }
        }
    }

    return 0;
}