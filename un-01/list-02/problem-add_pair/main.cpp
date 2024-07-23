#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a % 2 == 0 && b % 2 == 0)
    {
        cout << a + b << "\n";
    }
    else
    {
        if (a % 2 != 0)
        {
            cout << "Não posso somar, pois " << a << " não é par\n";
        }
        if (b % 2 != 0)
        {
            cout << "Não posso somar, pois " << b << " não é par\n";
        }
    }

    return 0;
}