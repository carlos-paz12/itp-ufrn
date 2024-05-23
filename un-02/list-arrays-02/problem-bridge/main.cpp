#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int v[n];
    int f = 1;
    int s = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int indiceF = 0;
    int indiceS = 0;
    for (int j = 0; j < n - 1; j++)
    {
        // f = max(f, v[j]);
        if (v[j] > f)
        {
            f = v[j];
            indiceF = j;
        }

        if (f == v[j + 1])
        {
            indiceS = j + 1;
            // s = max(s, v[j + 1]);
        }
    }

    cout << (indiceS - indiceF) - 1 << "\n";

    return 0;
}