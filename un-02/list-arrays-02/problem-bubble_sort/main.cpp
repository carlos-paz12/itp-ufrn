#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int v[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            cout << v[k] << " ";
        }
        for (int m = 0; m < n - (j + 1); m++)
        {
            if (v[m] > v[m + 1])
            {
                int copy = v[m];
                v[m] = v[m + 1];
                v[m + 1] = copy;
            }
        }
        cout << "\n";
    }

    return 0;
}