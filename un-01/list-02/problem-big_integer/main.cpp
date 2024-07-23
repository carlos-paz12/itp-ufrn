#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a >= b && a >= c && a >= d)
    {
        cout << "Maior: " << a;
    }
    else if (b >= a && b >= c && b >= d)
    {
        cout << "Maior: " << b;
    }
    else if (c >= a && c >= b && c >= d)
    {
        cout << "Maior: " << c;
    }
    else
    {
        cout << "Maior: " << d;
    }

    return 0;
}