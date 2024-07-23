#include <iostream>

int main()
{
    int n;
    char c;
    std::cin >> n >> c;

    n -= 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << ((i == j || j == n - i - 1) ? c : ' ');
        }
        std::cout << std::endl;
    }

    return 0;
}