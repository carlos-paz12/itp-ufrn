#include <iostream>

int main()
{
    int l, c;
    std::cin >> l;

    for (int i = 0; i < l; i++)
    {
        std::cin >> c;
        for (int j = 0; j < c; j++)
        {
            std::cout << '*';
        }
        std::cout << std::endl;
    }

    return 0;
}