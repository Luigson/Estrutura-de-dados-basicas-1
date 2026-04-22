/**
 * @file menorMaiorDigito.cpp
 * @brief Encontrar o menor e o maior dígito de um número natural N usando recursão.
 * 
 * @copyright (c) 2024 Eiji Adachi Medeiros Barbosa
 * 
 * Este código é licenciado sob a Licença MIT.
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include <utility> // Para usar std::pair

/**
 * @brief Encontra o menor e o maior dígito em um número natural N usando recursão.
 *
 * @param N O número natural a ser processado.
 * @return Um par com o menor dígito (primeiro) e o maior dígito (segundo).
 */
std::pair<int, int> menorMaiorDigito(int N) {
    // Caso base: se N for um único dígito, ele é tanto o menor quanto o maior
    if (N < 10) {
        return std::make_pair(N, N);
    }
    // Recursão: processa o número sem o último dígito
    auto resultado = menorMaiorDigito(N / 10);
    int ultimoDigito = N % 10;
    // Atualiza o menor e o maior dígito com base no último dígito
    resultado.first = std::min(resultado.first, ultimoDigito);
    resultado.second = std::max(resultado.second, ultimoDigito);
    return resultado;
}

TEST_CASE("Menor e Maior Dígito - Testes") {
    auto resultado = menorMaiorDigito(9);
    CHECK(resultado.first == 9);  // Verifica o menor dígito
    CHECK(resultado.second == 9); // Verifica o maior dígito

    resultado = menorMaiorDigito(0);
    CHECK(resultado.first == 0);  // Verifica o menor dígito
    CHECK(resultado.second == 0); // Verifica o maior dígito

    resultado = menorMaiorDigito(2117211);
    CHECK(resultado.first == 1);  // Verifica o menor dígito
    CHECK(resultado.second == 7); // Verifica o maior dígito

    resultado = menorMaiorDigito(1234567890);
    CHECK(resultado.first == 0);  // Verifica o menor dígito
    CHECK(resultado.second == 9); // Verifica o maior dígito

    resultado = menorMaiorDigito(987654321);
    CHECK(resultado.first == 1);  // Verifica o menor dígito
    CHECK(resultado.second == 9); // Verifica o maior dígito
}
