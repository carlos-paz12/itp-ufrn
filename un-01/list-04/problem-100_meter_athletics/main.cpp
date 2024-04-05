#include <iostream>

int main()
{
    double cut;
    std::cin >> cut;

    int a = 0;
    double input;

    while (input != -1)
    {
        std::cin >> input;

        if (input > -1 && input <= cut)
        {
            a++;
        }
    }

    int s = (a / 8) + ((a % 8) == 0 ? 0 : 1);

    std::cout << a << " " << s;

    return 0;
}