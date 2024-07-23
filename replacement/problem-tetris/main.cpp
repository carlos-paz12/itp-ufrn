#include <iostream>

using namespace std;

int main()
{
    int linhas = 20, colunas = 10;
    int tetris[linhas][colunas];

    int fileiras_a_serem_eliminadas = 0;

    for (int l = 0; l < linhas; l++)
    {
        int celulas = 0;
        for (int c = 0; c < colunas; c++)
        {
            cin >> tetris[l][c];
            if (tetris[l][c] == 1)
            {
                celulas++;
            }
        }
        if (celulas == colunas)
        {
            fileiras_a_serem_eliminadas++;
        }
    }

    cout << fileiras_a_serem_eliminadas << '\n';

    return 0;
}