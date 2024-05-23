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
        for (int m = j + 1; m < n; m++)
        {
            if (v[j] > v[m])
            {
                int copy = v[m];
                v[m] = v[j];
                v[j] = copy;
            }
        }
        cout << "\n";
    }

    return 0;
}