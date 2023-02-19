#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Nueva linea \n");
    printf("\nEdad \t Altura \t Peso \t \n \n"); // el \t tabula el texto
    printf("Pitido \n \a");     // el \a hace que pite el programa
    printf("\f");       // el \f crea una nueva página

    system("pause");
    return 0;
}