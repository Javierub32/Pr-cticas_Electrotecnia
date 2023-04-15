#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcion;
    printf("Escoja una opcion \n\n 1. España \t 2. Francia \t 3. Italia \t 4. Alemania");
    scanf("%i", &opcion);
    
    switch (opcion) {
    case 1:
        printf("Hola \n");
        break;
    
    case 2:
        printf("Bonjour \n");
        break;
    
    case 3:
        printf("Pronto \n");
        break;
    
    case 4:
        printf("Kabum kabum \n");
        break;
    
    default:
        break;
    }   //cierre switch
    

     system("pause");
     return 0;
}
