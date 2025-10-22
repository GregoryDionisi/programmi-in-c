#include <stdio.h>

int main(){
    int numero, resto, i;
    i = 2;

    printf("Inserisci un numero:\n");
    scanf("%d", &numero);

    if (numero > 1){
        if (numero == 2){
            printf("Il numero è primo\n");
        } else if (numero % 2 != 0){
            do{
                resto = numero % i;
                i++;
            } while (resto != 0 && i < numero); //i < numero perchè tanto che il numero sia divisibile per se stesso non ci interessa
                if (resto == 0){
                    printf("Il numero non è primo\n");
                } else {
                    printf("Il numero è primo\n");
                }
        } else {
            printf("Il numero non è primo\n");
        }
    } else {
        printf("Per favore inserire un numero maggior di 1\n");
    }
    return 0;
}