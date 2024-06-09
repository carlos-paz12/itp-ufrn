#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"

/*
 * Altere a função `pares()` abaixo de forma que ela retorne a quantidade de
 * dígitos pares do número passado como parâmetro.
 * Por exemplo, o número 19274 tem dois dígitos pares: 2 e 4.
 */
int pares(unsigned int numero)
{
  if (numero == 0) return 1;
  int c = 0;
  while (numero > 0)
  {
    if (numero % 2 == 0) c++;
    numero /= 10;
  }
  return c;
}

TEST_CASE("Testando a função pares()")
{
  CHECK(pares(374) == 1);
  CHECK(pares(19274) == 2);
  CHECK(pares(0) == 1);
  CHECK(pares(15793) == 0);
  CHECK(pares(50773) == 1);
  CHECK(pares(48266) == 5);
}