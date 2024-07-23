#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, sum;
    cin >> a >> b >> c >> d;
    sum = a + b + c + d;

    if (sum != 0)
    {
        sum = (sum - 1) % 26;
        char letter = 'A' + sum;
        cout << "Letra: " << letter << "\n";
    }
    else
    {
        cout << "Ei! Ninguém colocou nada!" << "\n";
    }

    return 0;
}