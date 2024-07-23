#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"

/*
 * Um conjuto é um tipo de coleção que possui uma propriedade particular: nenhum
 * elemento se repete.
 *
 * Implemente uma função que transforme uma dada sequência qualquer de inteiros
 * em um conjunto. Ou seja, não deve haver repetição de elementos.
 * A ordem em que os elementos se encontram na sequência resultante da operação
 * deverá ser a mesma da sequência original.
 */
void conjunto(int &tamanho, int sequencia[])
{
  int c = 0;
  for (int i = 0; i < tamanho; i++)
  {
    bool unfoud = true;
    for (int j = 0; j < c; j++)
    {
      if (sequencia[i] == sequencia[j])
      {
        unfoud = false;
        break;
      }
    }
    if (unfoud)
    {
      sequencia[c] = sequencia[i];
      c++;
    }
  }
  tamanho = c;
}

TEST_CASE("Testando uma sequência com repetições.")
{
  int seq[] = {7, 1, 4, 1, 2, 7, 3, 2, 2, 1};
  int tam = 10;
  conjunto(tam, seq);
  CHECK(tam == 5);
  CHECK(seq[0] == 7);
  CHECK(seq[1] == 1);
  CHECK(seq[2] == 4);
  CHECK(seq[3] == 2);
  CHECK(seq[4] == 3);
}

TEST_CASE("Testando uma sequência sem repetições.")
{
  int seq[] = {0, 9, -1, 7, 1, 4};
  int tam = 6;
  conjunto(tam, seq);
  CHECK(tam == 6);
  CHECK(seq[0] == 0);
  CHECK(seq[1] == 9);
  CHECK(seq[2] == -1);
  CHECK(seq[3] == 7);
  CHECK(seq[4] == 1);
  CHECK(seq[5] == 4);
}