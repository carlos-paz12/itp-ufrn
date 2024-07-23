#include <iostream>

int main()
{
    int n, countLeft = 0, countRight = 0, seat = 0;
    std::cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (a[i] == 2)
            seat = i;
    }

    for (int j = 0; j < seat; j++)
    {
        if (a[j] == 1)
        {
            countLeft++;
        }
    }

    for (int k = (seat + 1); k < n; k++)
    {
        if (a[k] == 1)
        {
            countRight++;
        }
    }

    if (countLeft > countRight)
    {
        std::cout << "direita\n";
    }
    else if (countLeft < countRight)
    {
        std::cout << "esquerda\n";
    }
    else
    {
        std::cout << "tanto faz\n";
    }

    return 0;
}