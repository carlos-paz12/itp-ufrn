#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    int n;
    int positives = 0;
    double sum = 0.0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double m;
        cin >> m;

        if (m > 0)
        {
            positives++;
            sum += m;
        }
    }

    if (n == 0 || positives == 0)
    {
        cout << "A competicao nao possui dados historicos!";
    }
    else
    {
        cout << sum / positives;
    }

    return 0;
}