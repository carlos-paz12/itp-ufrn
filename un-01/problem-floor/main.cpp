// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int w, l, t1, t2;

    cin >> w >> l;

    t1 = w * l + ((w - 1) * (l - 1));
    t2 = 2 * (w - 1) * (l - 1);

    cout << t1 << endl
         << t2 << endl;

    return 0;
}