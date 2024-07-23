#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cin.ignore(); // Corrigir erro de buffer para ler strings depois de ler inteiros

    string animes[n];

    for (int i = 0; i < n; i++)
    {
        getline(cin, animes[i]);
    }

    int m;
    cin >> m;

    string personagens[m];
    int animes_dos_personagens[m];

    for (int i = 0; i < m; i++)
    {
        cin.ignore(); // Corrigir erro de buffer para ler strings depois de ler inteiros
        cin >> personagens[i];
        cin >> animes_dos_personagens[i];
    }

    int o;
    cin >> o;

    int votos[o][m];
    int total_votos_dos_personagens[m] = {0};

    for (int i = 0; i < o; i++)
    {
        int total_votos = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> votos[i][j];
            total_votos_dos_personagens[j] += votos[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        cout << personagens[i] << " (" << animes[animes_dos_personagens[i]] << "): " << total_votos_dos_personagens[i] << '\n';
    }

    int mais_popular = 0;
    for (int i = 0; i < m; i++)
    {
        if (total_votos_dos_personagens[mais_popular] < total_votos_dos_personagens[i])
        {
            mais_popular = i;
        }
    }

    cout << "---\n"
         << personagens[mais_popular] << '\n';

    return 0;
}