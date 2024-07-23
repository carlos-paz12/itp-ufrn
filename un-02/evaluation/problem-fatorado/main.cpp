#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"

/*
 * Em matemática, fatoração é um processo em que um número (ou uma expressão) é
 * representado pela multiplicação de elementos menores (fatores). Por exemplo,
 * o número 56 pode ser representado por 2.2.2.7.
 * 
 * Quando fatoramos valores numéricos, eles são normalmente representados pelo
 * produto de potências (normalmente de números primos), como no exemplo anterior,
 * representado por 2³.7¹.
 * 
 * Implemente uma função para descobrir, a partir de uma sequência de potências,
 * qual o valor foi fatorado.
 * Essa função deve receber 2 arrays de inteiros. O primeiro conterá os valores
 * das bases das potências e o segundo os expoentes.
 * 
 * Por exemplo, se a função receber os sequintes arrays:
 * base = { 2, 7 }
 * expo = { 3, 1 }
 * ...ela deverá retornar 56, uma vez que 2³.7¹ = 56
 * 
 * A função deve receber na lista de parâmetros apenas um valor para o tamanho
 * dos arrays, uma vez que ambos terão o mesmo tamanho.
 * 
 * Obs 1: Assuma que os valores em ambos os arrays (base e expoente) serão valores
 * não-negativos.
 * 
 * Obs 2: Não utilize nenhuma função de bibliotecas (por exemplo, pow() da <cmath>).
 */
int fatorado(int t, int b[], int p[])
{
  int v = 1;
  for (int i = 0; i < t; i++)
  {
    int x = 1;
    for (int j = 0; j < p[i]; j++)
    {
      x = x * b[i];
    }
    v *= x; 
  }
  return v;
}

TEST_CASE("Testando a função com valores quaisquer.") {
  int base[] = { 2, 7 };
  int expo[] = { 3, 1 };
  CHECK(fatorado(2, base, expo) == 56);
}

TEST_CASE("Testando a função com valores quaisquer.") {
  int base[] = { 2, 3, 5 };
  int expo[] = { 3, 1, 2 };
  CHECK(fatorado(3, base, expo) == 600);
}

TEST_CASE("Testando a função com uma sequência unitária.") {
  int base[] = { 13 };
  int expo[] = { 1 };
  CHECK(fatorado(1, base, expo) == 13);
}

TEST_CASE("Testando a função com uma sequência unitária de exponente 0.") {
  int base[] = { 13 };
  int expo[] = { 0 };
  CHECK(fatorado(1, base, expo) == 1);
}

TEST_CASE("Testando a função com uma sequência unitária de base 0.") {
  int base[] = { 0 };
  int expo[] = { 15 };
  CHECK(fatorado(1, base, expo) == 0);
}

TEST_CASE("Testando a função com uma sequência unitária de base e expoente 0.") {
  int base[] = { 0 };
  int expo[] = { 0 };
  CHECK(fatorado(1, base, expo) == 1);
}

TEST_CASE("Testando a função com um expoente com valor 0.") {
  int base[] = { 7, 5, 2 };
  int expo[] = { 1, 0, 2 };
  CHECK(fatorado(3, base, expo) == 28);
}

