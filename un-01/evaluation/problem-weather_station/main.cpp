#include <iostream>

using namespace std;

int main()
{
    int n;
    double h = 0, maxT = 0, minT = 0, bestH = h, bestDif = maxT - minT;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> h >> maxT >> minT;
        if ((maxT - minT) > bestDif)
        {
            bestH = h;
            bestDif = (maxT - minT);
        }
    }

    cout << bestH;
    return 0;
}