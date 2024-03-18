#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    double a, b;
    cin >> a >> b;

    int sum = (a + b) * 100;

    cout << sum / 100.0 << endl;

    return 0;
}