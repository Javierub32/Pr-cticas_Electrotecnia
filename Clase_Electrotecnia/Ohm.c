#include <stdio.h>
#include <stdlib.h>
int main() {
    float voltaje, resistencia, corriente;

    // Pedimos al usuario que ingrese el voltaje y la resistencia
    printf("Ingresa el valor del voltaje en volts: ");
    scanf("%f", &voltaje);
    printf("Ingresa el valor de la resistencia en ohms: ");
    scanf("%f", &resistencia);

    // Calculamos la corriente utilizando la ley de Ohm: I = V / R
    corriente = voltaje / resistencia;

    // Imprimimos el resultado
    printf("La corriente es de: %.2f amperios\n", corriente);

    system("pause");
    return 0;
}