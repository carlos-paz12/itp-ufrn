#include <iostream>

using namespace std;

int main()
{
    double t1, t2, t3, c;
    cin >> t1 >> t2 >> t3 >> c;
    double best;

    if (t1 <= t2 && t1 <= t3)
    {
        best = t1;
    }
    else if (t2 <= t1 && t2 <= t3)
    {
        best = t2;
    }
    else
    {
        best = t3;
    }

    cout << "Atleta" << (best <= c ? " aprovado " : " reprovado ") << "com tempo " << best << "s e nota de corte " << c << "s\n";

    return 0;
}