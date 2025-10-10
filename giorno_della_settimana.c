#include <stdio.h>

int main(){
    int numero;
    do
    {
    printf("\nInserisci un numero da 1 a 7 (0 per uscire):\n");
    scanf("%d", &numero);
    if(numero == 1)
    {
        printf("Lunedì");
    }
    else if (numero == 2)
    {
        printf("Martedì");
    } 
    else if (numero == 3)
    {
        printf("Mercoledì");
    }
    else if (numero == 4)
    {
        printf("Giovedì");
    }
    else if (numero == 5)
    {
        printf("Venerdì");
    }
    else if (numero == 6)
    {
        printf("Sabato");
    }
    else if (numero == 7)
    {
        printf("Domenica");
    }
    } while(numero != 0);
    return 0;
}