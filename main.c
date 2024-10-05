#include <stdio.h>

int main() {
    // Declaración de variables
    int NUM, d1, d2, d3, d4;

    // Entrada: Solicitar el número de cuatro dígitos
    printf("Ingrese un número entero de cuatro dígitos: ");
    scanf("%d", &NUM);

    // Verificar si el número tiene cuatro dígitos
    if (NUM < 1000 || NUM > 9999) {
        printf("El número debe tener cuatro dígitos.\n");
    } else {
        // Dividir el número en dígitos
        d1 = NUM / 1000;          // Dígito más significativo
        d2 = (NUM / 100) % 10;    // Segundo dígito
        d3 = (NUM / 10) % 10;     // Tercer dígito
        d4 = NUM % 10;            // Dígito menos significativo

        // Verificar si todos los dígitos son pares
        if (d1 % 2 != 0 || d2 % 2 != 0 || d3 % 2 != 0 || d4 % 2 != 0) {
            printf("No todos los dígitos son pares.\n");
        } else {
            printf("Todos los dígitos son pares.\n");
        }
    }

    return 0;
}
