#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    int years = input / 365;
    int months = (input % 365) / 30;
    int days = (input % 365) % 30;

    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;

    return 0;
}