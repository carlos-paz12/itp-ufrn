#include <iostream>

using namespace std;

int main()
{
    int v;
    cin >> v;

    cout << v % 10;
    v = v / 10;

    cout << v % 10;
    v = v / 10;

    cout << v;

    /*
    int input; cin >> input;
    int size = to_string(input).size();

    for (int i = 0; i < s; i++)
    {
        cout << input % 10;
        input /= 10;
    }

    cout << endl;
    */

    return 0;
}