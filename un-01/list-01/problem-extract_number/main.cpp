#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    int extracted = input % 10;
    input /= 10;

    cout << input << " " << extracted << endl;

    return 0;
}