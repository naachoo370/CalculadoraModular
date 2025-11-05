#include "calculadora.h"

int sumar(int a, int b) { return a + b; }
int restar(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }
int dividir(int a, int b) { return (b != 0) ? a / b : 0; }

/**
 * @brief Calcula la potencia de un número entero.
 * @param base Número base.
 * @param exponente Exponente al que se eleva la base.
 * @return Resultado de base^exponente.
 */
int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}
