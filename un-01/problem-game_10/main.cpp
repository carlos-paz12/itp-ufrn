#include <iostream>

using namespace std;

// OBI2017 Problem
int main()
{
    int n, d, a;

    cin >> n >> d >> a;

    cout << (d + n - a) % n;

    return 0;
}