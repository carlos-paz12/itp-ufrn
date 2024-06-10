#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"

/*
 * Implemente uma função para calcular a interseção entre dois conjuntos.
 * Sua função deve receber como parâmetro 3 sequências (arrays). As duas primeiras
 * são os conjuntos que você quer calcular a interseção. A terceira sequência
 * será alterada para conter a interseção dos dois anteriores.
 *
 * Lembre-se que tanto os valores da sequência resultante (interseção) quando
 * seu tamanho podem ser alterados.
 *
 * Para facilitar, você pode utilizar a função criada na atividade anterior (conjunto)
 * para transformar as sequências em conjuntos (sem repetição de valores) antes de
 * calcular a interseção delas.
 *
 * Re-utilize a função da atividade anterior (conjuntos iguais) para saber se o
 * conjunto com a interseção calculada é igual ao conjunto com a interseção esperada.
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

bool iguais(int seq1[], int tamanho1, int seq2[], int tamanho2)
{
  conjunto(tamanho1, seq1);
  conjunto(tamanho2, seq2);

  if (tamanho1 != tamanho2)
  {
    return false;
  }
  else
  {
    int c = 0;
    for (int i = 0; i < tamanho1; i++)
    {
      for (int j = 0; j < tamanho1; j++)
      {
        if (seq1[i] == seq2[j])
        {
          c++;
          break;
        }
      }
    }
    return c == tamanho1;
  }
}

void intersecao(int seq1[], int tamanho1, int seq2[], int tamanho2, int calculada[], int &tam)
{
  conjunto(tamanho1, seq1);
  conjunto(tamanho2, seq2);

  tam = 0;
  for (int i = 0; i < tamanho1; i++)
  {
    for (int j = 0; j < tamanho2; j++)
    {
      if (seq1[i] == seq2[j])
      {
        calculada[tam] = seq1[i];
        tam++;
      }
    }
  }
}

TEST_CASE("Testando com duas sequências sem repetições.")
{
  int seq1[] = {7, 1, 4, 2, 3};
  int seq2[] = {8, 4, 2, 1, 6, 9, 0};
  int esperada[] = {1, 4, 2};
  int calculada[20];
  int tam;
  intersecao(seq1, 5, seq2, 7, calculada, tam);
  CHECK(iguais(esperada, 3, calculada, tam) == true);
}

TEST_CASE("Testando a 1a sequência sem repetições.")
{
  int seq1[] = {8, 4, 2, 1, 6, 9, 0};
  int seq2[] = {7, 1, 4, 2, 3, 1, 7, 4, 7, 3};
  int esperada[] = {1, 4, 2};
  int calculada[20];
  int tam;
  intersecao(seq1, 7, seq2, 10, calculada, tam);
  CHECK(iguais(esperada, 3, calculada, tam) == true);
}

TEST_CASE("Testando a 2ª sequência sem repetições.")
{
  int seq1[] = {7, 1, 4, 2, 3, 1, 7, 4, 7, 3};
  int seq2[] = {8, 4, 2, 1, 6, 9, 0};
  int esperada[] = {1, 4, 2};
  int calculada[20];
  int tam;
  intersecao(seq1, 10, seq2, 7, calculada, tam);
  CHECK(iguais(esperada, 3, calculada, tam) == true);
}

TEST_CASE("Testando ambas sequência com repetições.")
{
  int seq1[20] = {7, 1, 4, 1, 2, 7, 3, 2, 2, 1};
  int seq2[20] = {8, 4, 2, 1, 4, 2, 6, 9, 0};
  int esperada[] = {1, 4, 2};
  int calculada[20];
  int tam;
  intersecao(seq1, 10, seq2, 9, calculada, tam);
  CHECK(iguais(esperada, 3, calculada, tam) == true);
}
