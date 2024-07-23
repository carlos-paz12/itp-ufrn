#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    a *= a;
    b *= b;
    c *= c;

    if (a == b + c || b == a + c || c == b + a)
    {
        cout << "Pythagorean triple!\n";
    }
    else
    {
        cout << "Not a Pythagorean triple!\n";
    }

    return 0;
}