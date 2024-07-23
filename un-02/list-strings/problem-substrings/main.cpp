#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;

    getline(cin, a);
    getline(cin, b);

    for (int i = 0; i < a.length(); i++)
    {
        a[i] = tolower(a[i]);
    }
    for (int j = 0; j < b.length(); j++)
    {
        b[j] = tolower(b[j]);
    }

    int c = 0, p = b.find(a);

    while (p != string::npos)
    {
        b.erase(p, a.length());
        c++;
        p = b.find(a, p);
    }

    cout << c << "\n";

    return 0;
}