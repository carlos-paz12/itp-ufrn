#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"

/*
 * Altere a função a seguir de forma que ela verifique se uma sequência de inteiros é
 * uma P.A (progressão aritmética). Se for, altere o parâmetro passado com o valor da
 * razão da P.A.
 */
bool eh_PA(int tamanho, int sequencia[], int &razao)
{
  if (tamanho > 2)
  {
    eh_PA(tamanho - 1, sequencia, razao);
    bool true_or_false = sequencia[tamanho - 2] + razao == sequencia[tamanho - 1];
    return true_or_false;
  }
  else
  {
    razao = sequencia[tamanho - 1] - sequencia[tamanho - 2];
    return true;
  }
}

TEST_CASE("Testando uma sequência que é uma PA.")
{
  int seq[] = {3, 6, 9, 12, 15, 18};
  int r;
  CHECK(eh_PA(6, seq, r) == true);
  CHECK(r == 3);
}

TEST_CASE("Testando uma sequência que não é uma PA.")
{
  int seq[] = {3, 6, 9, 12, 14, 18};
  int r;
  CHECK(eh_PA(6, seq, r) == false);
}

TEST_CASE("Testando uma PA com razão negativa.")
{
  int seq[] = {2, 1, 0, -1, -2, -3, -4};
  int r;
  CHECK(eh_PA(5, seq, r) == true);
  CHECK(r == -1);
}

TEST_CASE("Testando uma PA constante.")
{
  int seq[] = {6, 6, 6, 6, 6, 6, 6, 6, 6};
  int r;
  CHECK(eh_PA(9, seq, r) == true);
  CHECK(r == 0);
}