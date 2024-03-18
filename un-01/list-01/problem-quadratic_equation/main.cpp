#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    double a, b, c;
    cin >> a >> b >> c;

    double delta = (b * b) - 4 * a * c;
    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);

    cout << x1 << " " << x2;

    return 0;
}