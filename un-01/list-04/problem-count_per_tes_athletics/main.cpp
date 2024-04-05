#include <iostream>

int main()
{
    int e;
    int c = 0, s = 0, l = 0, t = 0;

    std::cin >> e;

    for (int i = 0; i < e; i++)
    {
        while (true)
        {
            char test;
            std::cin >> test;

            if (test == 'C')
            {
                c++;
            }
            else if (test == 'S')
            {
                s++;
            }
            else if (test == 'L')
            {
                l++;
            }
            else
            {
                break;
            }

            t++;
        }
    }

    std::cout << c << " " << s << " " << l << " " << t;

    return 0;
}