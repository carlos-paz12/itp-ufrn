#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"

/*
 * Uma das operações mais usadas para tratar dados preenchidos por usuários é
 * remover os espaços em branco no inicio ou no final de um formulário, por exemplo.
 * Essa operação chama-se "trim".
 * 
 * Implemente uma função que realiza a operação trim em uma string passada. A função
 * deve retornar uma nova string com os espaços em branco iniciais e finais removidos.
 */
std::string trim(std::string str)
{
  while (str.at(0) == ' ')
  {
    str.erase(0,1);
  }
  while (str.at(str.length() - 1) == ' ')
  {
    str.erase(str.length() - 1);
  }
  return str;
}

TEST_CASE("Testando com uma string sem espaço em branco.") {
  std::string str = "Amou daquela vez como se fosse a ultima";
  CHECK(trim(str) == "Amou daquela vez como se fosse a ultima");
}

TEST_CASE("Testando com uma string com espaço em branco no início.") {
  std::string str = "   Beijou sua mulher como se fosse a ultima";
  CHECK(trim(str) == "Beijou sua mulher como se fosse a ultima");
}

TEST_CASE("Testando com uma string com espaço em branco no final.") {
  std::string str = "E cada filho seu como se fosse o unico    ";
  CHECK(trim(str) == "E cada filho seu como se fosse o unico");
}

TEST_CASE("Testando com uma string com espaço em branco em ambos os lados.") {
  std::string str = "     E atravessou a rua com seu passo timido        ";
  CHECK(trim(str) == "E atravessou a rua com seu passo timido");
}
