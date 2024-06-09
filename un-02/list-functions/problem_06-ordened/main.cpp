#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"

/*
 * Altere a função a seguir de forma que ela verifique se uma sequência de inteiros está
 * em ordem crescente.
 */
bool esta_ordenado(int tamanho, int sequencia[]) {
  if (tamanho < 2) return true;
  else return (sequencia[tamanho - 2] < sequencia[tamanho - 1]) && esta_ordenado(tamanho - 1, sequencia);
}

TEST_CASE("Testando uma sequência ordenada.") {
  int seq[] = { 6, 9, 11, 34, 56, 77, 91, 101 };
  CHECK(esta_ordenado(8, seq) == true);
}

TEST_CASE("Testando uma sequência não ordenada.") {
  int seq[] = { 2, 6, 1, 3, 9 };
  CHECK(esta_ordenado(5, seq) == false);
}

TEST_CASE("Testando uma sequência unitária.") {
  int seq[] = { 6 };
  CHECK(esta_ordenado(1, seq) == true);
}

TEST_CASE("Testando uma sequência vazia.") {
  int seq[] = { };
  CHECK(esta_ordenado(0, seq) == true);
}
