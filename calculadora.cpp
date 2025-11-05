#include "calculadora.h"

int sumar(int a, int b) { return a + b; }
int restar(int a, int b) { return a - b; }
int multiplicar(int a, int b) { return a * b; }
int dividir(int a, int b) { return (b != 0) ? a / b : 0; }

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) resultado *= base;
    return resultado;
}
