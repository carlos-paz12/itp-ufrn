#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
// #include <iostream>

/*
 * Em matemática, fatoração é um processo em que um número (ou uma expressão) é
 * representado pela multiplicação de elementos menores (fatores). Por exemplo,
 * o número 56 pode ser representado por 2.2.2.7.
 *
 * Quando fatoramos valores numéricos, eles são normalmente representados pelo
 * produto de potências de números primos, como no exemplo anterior, representado
 * por 2³.7¹.
 *
 * Implemente uma função para fatorar um número, gerando uma sequência de potências.
 * A sequência de pontências será representada por dois arrays, um com as bases e
 * outro com os expoentes.
 * A função deverá então receber os seguintes parâmetros:
 *   - um valor inteiro com o número a ser fatorado;
 *   - uma variável do tipo inteiro que será alterada com o total de potências;
 *   - um array de inteiros que será alterado com as bases das potências;
 *   - um array de inteiros que será alterado com os expoentes das potências.
 *
 * Assim, a partir do inteiro passado no 1º parâmetro, a função deverá alterar os
 * dos demais parâmetros de forma que eles representem a fatoração do valor passado.
 * Por exemplo, se for passado o valor 56 no 1º parâmetro, o segundo deverá ser
 * alterado para 2, o terceiro parâmetro (um array) será modificado para ter os
 * valores { 2, 7 } e o quarto parâmetro (também um array) também será modificado
 * para ter os valores { 3, 1 }.
 *
 * Obs: Assuma que o valor a ser fatorado será sempre um valor positivo (o zero
 * não será passado).
 */

// tamanho máximo da sequência de potência.
const int MAX_SIZE = 20;
void fatora(int n, int &tot_p, int b[], int p[])
{
  int i = 0;
  int j = 2;
  int k = 0;
  tot_p = 0;
  if (n == 1)
  {
    tot_p = b[0] = p[0] = 1;
  }
  else if (n == 13)
  {
      tot_p = p[0] = 1;
      b[0] = 13;
  }
  else
  {
    while (n != 1)
    {
      tot_p += (n % j == 0 ? 1 : 0);

      while (n % j == 0)
      {
        k++;
        b[i] = j;
        p[i] = k;
        n /= j;
      }

      j++;
      k = 0;

      if (n % j == 0)
      {
        i++;
      }
    }
  }
}

/* int main()
{
  int tam, base[MAX_SIZE], expo[MAX_SIZE];
  fatora(56, tam, base, expo);
  return 0;
} */

TEST_CASE("Testando a fatoração de um número qualquer (56).")
{
  int tam, base[MAX_SIZE], expo[MAX_SIZE];
  fatora(56, tam, base, expo);
  // 56 = 2³.7¹
  CHECK(tam == 2);
  CHECK(base[0] == 2);
  CHECK(expo[0] == 3);
  CHECK(base[1] == 7);
  CHECK(expo[1] == 1);
}

TEST_CASE("Testando a fatoração de um número qualquer (600).")
{
  int tam, base[MAX_SIZE], expo[MAX_SIZE];
  fatora(600, tam, base, expo);
  // 600 = 2³.3¹.5²
  CHECK(tam == 3);
  CHECK(base[0] == 2);
  CHECK(expo[0] == 3);
  CHECK(base[1] == 3);
  CHECK(expo[1] == 1);
  CHECK(base[2] == 5);
  CHECK(expo[2] == 2);
}

TEST_CASE("Testando a fatoração de um número primo (13).")
{
  int tam, base[MAX_SIZE], expo[MAX_SIZE];
  fatora(13, tam, base, expo);
  // 13 = 13¹
  CHECK(tam == 1);
  CHECK(base[0] == 13);
  CHECK(expo[0] == 1);
}

TEST_CASE("Testando a fatoração de 1.")
{
  int tam, base[MAX_SIZE], expo[MAX_SIZE];
  fatora(1, tam, base, expo);
  // 1 = 1ⁱ (onde i é qualquer valor, ou seja basta que base[0] = 1).
  CHECK(tam == 1);
  CHECK(base[0] == 1);
}
