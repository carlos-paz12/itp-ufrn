#include <iostream>

using namespace std;

int main()
{
    int a[10], b[10];
    double pA[10], pB[10];
    double maiorDefesaA = 0.0, maiorDefesaB = 0.0;

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < 10; j++)
    {
        cin >> b[j];
    }

    for (int k = 0; k < 10; k++)
    {
        cin >> pA[k];
        maiorDefesaA = min(maiorDefesaA, pA[k]);
    }

    for (int m = 0; m < 10; m++)
    {
        cin >> pB[m];
        maiorDefesaB = max(maiorDefesaB, pB[m]);
    }

    int countA = 0;
    cout << "A: ";
    for (int n = 0; n < 10; n++)
    {
        if (pA[n] > maiorDefesaB)
        {
            cout << a[n] << " ";
            countA++;
        }
    }

    if (countA == 0)
    {
        cout << "sem impedimentos";
    }

    int countB = 0;
    cout << "\nB: ";
    for (int o = 0; o < 10; o++)
    {
        if (pB[o] < maiorDefesaA)
        {
            cout << b[o] << " ";
            countB++;
        }
    }

    if (countB == 0)
    {
        cout << "sem impedimentos";
    }
}