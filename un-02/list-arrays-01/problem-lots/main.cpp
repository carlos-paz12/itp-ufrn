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

        for (int j = (seat - 1); a[j] == 0; j--)
        {
            // std::cout << a[j] << std::endl;
            countLeft++;
        }

        for (int k = (seat + 1); a[k] == 0; k++)
        {
            // std::cout << a[k] << std::endl;
            countRight++;
        }

        std::cout << countRight + countLeft;

        return 0;
    }