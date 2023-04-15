#include <stdio.h>
#include <stdlib.h>
int main() {

    int i, n;
    float suma, media, nota;

    suma = 0;
    media = 0;

    printf("\n Numero de Notas = ?");
    scanf("%i", &n);

    for ( i = 1; i <= n; i++) {
        printf("\n Nota Numero %i =", i);
        scanf("%f", &nota );

        suma = suma + nota;
    }
    
    media = suma / (i-1);
    printf("\n Media Aritmética = %f", media );


     system("pause");
     return 0;
}

