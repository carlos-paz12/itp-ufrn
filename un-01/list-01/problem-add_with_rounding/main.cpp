#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    double a, b;
    cin >> a >> b;

    cout << a + b << endl;

    return 0;
}