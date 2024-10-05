#include <stdio.h>

int main() {
    // Declaraci�n de variables
    int NUM, d1, d2, d3, d4;

    // Entrada: Solicitar el n�mero de cuatro d�gitos
    printf("Ingrese un n�mero entero de cuatro d�gitos: ");
    scanf("%d", &NUM);

    // Verificar si el n�mero tiene cuatro d�gitos
    if (NUM < 1000 || NUM > 9999) {
        printf("El n�mero debe tener cuatro d�gitos.\n");
    } else {
        // Dividir el n�mero en d�gitos
        d1 = NUM / 1000;          // D�gito m�s significativo
        d2 = (NUM / 100) % 10;    // Segundo d�gito
        d3 = (NUM / 10) % 10;     // Tercer d�gito
        d4 = NUM % 10;            // D�gito menos significativo

        // Verificar si todos los d�gitos son pares
        if (d1 % 2 != 0 || d2 % 2 != 0 || d3 % 2 != 0 || d4 % 2 != 0) {
            printf("No todos los d�gitos son pares.\n");
        } else {
            printf("Todos los d�gitos son pares.\n");
        }
    }

    return 0;
}
