#include <iostream>

using namespace std;

int main()
{
    int n;
    int totOuro1 = 0, totOuro2 = 0, totOuro3 = 0;
    int totPrata1 = 0, totPrata2 = 0, totPrata3 = 0;
    int totBronze1 = 0, totBronze2 = 0, totBronze3 = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int input;
            cin >> input;

            if (j == 0)
            {
                if (input == 1)
                {
                    totOuro1++;
                }
                else if (input == 2)
                {
                    totOuro2++;
                }
                else
                {
                    totOuro3++;
                }
            }
            else if (j == 1)
            {
                if (input == 1)
                {
                    totPrata1++;
                }
                else if (input == 2)
                {
                    totPrata2++;
                }
                else
                {
                    totPrata3++;
                }
            }
            else
            {
                if (input == 1)
                {
                    totBronze1++;
                }
                else if (input == 2)
                {
                    totBronze2++;
                }
                else
                {
                    totBronze3++;
                }
            }
        }
    }

    cout << "país 1: " << totOuro1 << " ouros, " << totPrata1 << " pratas e " << totBronze1 << " bronzes\n";
    cout << "país 2: " << totOuro2 << " ouros, " << totPrata2 << " pratas e " << totBronze2 << " bronzes\n";
    cout << "país 3: " << totOuro3 << " ouros, " << totPrata3 << " pratas e " << totBronze3 << " bronzes\n";
    return 0;
}