#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include <cmath>

/*
 * Altere a função `eh_primo()` abaixo de forma que ela retorne verdade (true)
 * se o valor passado como parâmetro é primo, ou falso (false) caso contrário.
 * Por definição, um número é primo se ele for maior que 1 e possuir apenas dois
 * divisores: 1 e o próprio número.
 */
bool eh_primo(int numero)
{
  if (numero < 2) return false;
  for (int i = 2; i <= sqrt(numero); i++) if (numero % i == 0) return false;
  return true;
}

TEST_CASE("Testando a função pare verificar se um número é primo.")
{
  CHECK(eh_primo(1) == false);
  CHECK(eh_primo(2) == true);
  CHECK(eh_primo(3) == true);
  CHECK(eh_primo(8) == false);
  CHECK(eh_primo(9) == false);
  CHECK(eh_primo(11) == true);
  CHECK(eh_primo(26) == false);
  CHECK(eh_primo(31) == true);
  CHECK(eh_primo(267) == false);
  CHECK(eh_primo(359) == true);
  CHECK(eh_primo(397) == true);
  CHECK(eh_primo(0) == false);
  CHECK(eh_primo(-2) == false);
}