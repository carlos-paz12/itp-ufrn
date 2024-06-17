#define DOCTEST_CONFIG_IMPLEMENTS_WITH_MAIN
#include "../doctest.h"
/*
 * Implemente uma função que soma dois vetores
 * (sequências de inteiros). A função deve
 * retornar uma nova sequência alocada dinamicamente.
 */
int* sum_array(int s_a, int *a, int s_b, int *b, int &new_s)
{
    new_s = s_a < s_b ? s_a : s_b;
    int *ab = new int[new_s];
    for (int i = 0; i < new_s; i++) ab[i] = a[i] + b[i];
    return ab;
}

TEST_CASE("s_a == s_b")
{
    int a[] = {1, 0, 0, 1, 0, 0, 1};
    int b[] = {0, 1, 1, 0, 1, 1, 0};
    int new_s;

    int *ab = sum_array(6, a, 6, b, new_s);

    CHECK(ab[0] == 1);
    CHECK(ab[1] == 1);
    CHECK(ab[2] == 1);
    CHECK(ab[3] == 1);
    CHECK(ab[4] == 1);
    CHECK(ab[5] == 1);
    CHECK(new_s == 6);
}

TEST_CASE("s_a > s_b")
{
    int a[] = {1, 0, 0, 1, 0, 0, 1};
    int b[] = {0, 1, 1};
    int new_s;

    int *ab = sum_array(6, a, 3, b, new_s);

    CHECK(ab[0] == 1);
    CHECK(ab[1] == 1);
    CHECK(ab[2] == 1);
    CHECK(new_s == 3);
}

TEST_CASE("s_a < s_b")
{
    int a[] = {1, 2, 3, 4};
    int b[] = {0, 1, 1, 0, 0, 1, 1, 0};
    int new_s;

    int *ab = sum_array(4, a, 8, b, new_s);

    CHECK(ab[0] == 1);
    CHECK(ab[1] == 1);
    CHECK(ab[2] == 1);
    CHECK(new_s == 4);
}