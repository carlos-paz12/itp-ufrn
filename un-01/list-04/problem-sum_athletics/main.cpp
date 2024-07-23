#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    int quantity;
    double price;

    int totalQuantity = 0;
    double totalPrice = 0;

    while (true)
    {
        cin >> quantity;

        if (quantity == -1)
            break;

        cin >> price;

        totalQuantity += quantity;
        totalPrice += (price * quantity);
    }

    cout << totalQuantity << " " << totalPrice << endl;

    return 0;
}