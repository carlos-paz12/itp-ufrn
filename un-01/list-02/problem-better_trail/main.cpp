#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    if (t >= 0 && t < 5)
    {
        cout << "Iniciante\n";
    }
    else
    {
        int s;
        cin >> s;

        if (t >= 5 && t < 20)
        {
            cout << ((s == 0) ? "Iniciante\n" : "Intermediário\n");
        }
        else
        {
            cout << ((s == 0) ? "Intermediário\n" : "Avançado\n");
        }
    }

    return 0;
}