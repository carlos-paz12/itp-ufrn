#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"

/*
 * Implemente uma função para verificar se uma matriz é simétrica.
 * Sua função deve receber como parâmetro uma matriz quadrada (mesmo número de
 * linhas e colunas) e um valor inteiro indicando as duas dimensões da matriz.
 * A função deve então retornar verdadeiro se a matriz for simétrica ou falso
 * caso contrário.
 * Obs: uma matriz é simétrica quando for igual a sua transposta (e a transposta
 * de uma matriz é uma nova matriz obtida da troca de linhas por colunas).
 */
bool eh_simetrica(/* matriz */, int dimensao)
{
  for (int i = 0; i < dimensao; i++)
  {
    for (int j = 0; j < dimensao; j++)
    {
      if (mat[i][j] != mat[j][i])
      {
        return false;
      }
    }
  }
  return true;
}

TEST_CASE("Testando a 1ª matriz simétrica.")
{
  int mat[3][3] = {
      {7, 1, 4},
      {1, 2, 1},
      {4, 1, 7},
  };
  CHECK(eh_simetrica(mat, 3) == true);
}

TEST_CASE("Testando a 2ª matriz simétrica.")
{
  int mat[3][3] = {
      {7, 1, 4},
      {1, 2, 6},
      {4, 6, 8},
  };
  CHECK(eh_simetrica(mat, 3) == true);
}

TEST_CASE("Testando a 3ª matriz simétrica.")
{
  int mat[5][5] = {
      {7, 1, 4, 8, 2},
      {1, 2, 1, 7, 3},
      {4, 1, 3, 4, 5},
      {8, 7, 4, 9, 6},
      {2, 3, 5, 6, 0},
  };
  CHECK(eh_simetrica(mat, 5) == true);
}

TEST_CASE("Testando uma matriz com um único elemento.")
{
  int mat[1][1] = {
      {5},
  };
  CHECK(eh_simetrica(mat, 1) == true);
}

TEST_CASE("Testando a 1ª matriz não simétrica.")
{
  int mat[3][3] = {
      {7, 1, 4},
      {1, 2, 3},
      {4, 1, 7},
  };
  CHECK(eh_simetrica(mat, 3) == false);
}

TEST_CASE("Testando a 2ª matriz não simétrica.")
{
  int mat[3][3] = {
      {7, 1, 4},
      {1, 2, 6},
      {7, 6, 8},
  };
  CHECK(eh_simetrica(mat, 3) == false);
}

TEST_CASE("Testando a 3ª matriz não simétrica.")
{
  int mat[5][5] = {
      {7, 1, 4, 8, 2},
      {1, 2, 1, 7, 3},
      {4, 1, 3, 4, 5},
      {8, 7, 1, 9, 6},
      {2, 3, 5, 6, 0},
  };
  CHECK(eh_simetrica(mat, 5) == false);
}
