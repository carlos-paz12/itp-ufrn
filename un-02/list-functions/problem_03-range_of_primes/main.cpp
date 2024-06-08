#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/*
 * Implemente uma função chamada num_primos() que recebe dois valores inteiros como
 * parâmetro e retorna a quantidade de primos entre os dois valores (inclusos).
 * Por exemplo, entre 5 e 20 há 6 números primos: 5, 7, 11, 13, 17 e 19.
 * Sua função não deve fazer distinção entre os limites do intervalo passados nos
 * parãmetros. Ou seja, o limite mínimo pode estar no 1º ou no 2º parãmetro.
 * 
 * Se você já realizou a atividade para verificar se um número é primo, você pode
 * copiar e colar sua função aqui. Depois veremos como reutilizar funções de diferentes
 * arquivos.
 */


TEST_CASE("Testando a função para calcular o número de primos em um intervalo.") {
  CHECK(num_primos(5, 20) == 6);
  CHECK(num_primos(20, 5) == 6);
  CHECK(num_primos(3, 3) == 1);
  CHECK(num_primos(-100, 25) == 9);
  CHECK(num_primos(-100, -25) == 0);
  CHECK(num_primos(25, 0) == 9);
  CHECK(num_primos(100, 200) == 21);
}