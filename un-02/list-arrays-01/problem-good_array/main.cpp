#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int a[n];
    bool good = true;

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    for (int j = 1; j < n; j++)
    {
        if ((a[j] - a[j - 1]) % 2 != 0)
        {
            good = false;
        }
    }

    std::cout << (good ? "Legal" : "Chato");

    return 0;
}