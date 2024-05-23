#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int a[n], b[n], c[n], d[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        d[i] = a[i];
    }

    for (int j = 0; j < n; j++)
    {
        std::cin >> b[j];
        d[j] += b[j];
    }

    for (int k = 0; k < n; k++)
    {
        std::cin >> c[k];
        d[k] += c[k];
    }

    for (int l = 0; l < n; l++)
    {
        std::cout << d[l] << " ";
    }

    return 0;
}