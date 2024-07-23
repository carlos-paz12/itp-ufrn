#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    double x1, x2, x3;
    double y1, y2, y3;
    double z1, z2, z3;

    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;
    cin >> x3 >> y3 >> z3;

    double d1 = sqrt(pow(x1, 2) + pow(y1, 2) + pow(z1, 2));
    double d2 = sqrt(pow(x2, 2) + pow(y2, 2) + pow(z2, 2));
    double d3 = sqrt(pow(x3, 2) + pow(y3, 2) + pow(z3, 2));

    if (d1 <= d2 && d1 <= d3)
    {
        cout << d1;
    }
    else if (d2 <= d1 && d2 <= d3)
    {
        cout << d2;
    }
    else
    {
        cout << d3;
    }
    return 0;
}