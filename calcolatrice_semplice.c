#include <stdio.h>

int main(){
    int numero;
    float primo, secondo, risultato;
    do
    {
    printf("Inserisci un numero da 1 a 5 corrispondente alle varie operazioni:\n");
    printf("1. Somma\n");
    printf("2. Sottrazione\n");
    printf("3. Moltiplicazione\n");
    printf("4. Divisione\n");
    printf("5. Esci\n");
    scanf("%d", &numero);
    //CASO CON LO SWITCH CASE
    if (numero > 0 && numero < 5){
        printf("Inserisci il primo numero:\n");
        scanf("%f", &primo);
        printf("Inserisci il secondo numero:\n");
        scanf("%f", &secondo);
    }
    switch (numero)
    {
        case 1:
            risultato = primo + secondo;
            printf("%f + %f = %f\n", primo, secondo, risultato);
            break;
        case 2:
            risultato = primo - secondo;
            printf("%f - %f = %f\n", primo, secondo, risultato);
            break;
        case 3:
            risultato = primo * secondo;
            printf("%f * %f = %f\n", primo, secondo, risultato);
            break;
        case 4:
            risultato = primo / secondo;
            printf("%f / %f = %f\n", primo, secondo, risultato);
            break;
        case 5:
            printf("Grazie e arrivederci\n");
            break;
        default:
            printf("Errore, riprova!\n");
    }
   //CASO CON L'IF/ELSE
    /*if (numero > 0 && numero < 5){
        printf("Inserisci il primo numero:\n");
        scanf("%f", &primo);
        printf("Inserisci il secondo numero:\n");
        scanf("%f", &secondo);
        if (numero == 1){
            risultato = primo + secondo;
            printf("%f + %f = %f\n", primo, secondo, risultato);
        }
        else if (numero == 2){
            risultato = primo - secondo;
            printf("%f - %f = %f\n", primo, secondo, risultato);
        }
        else if (numero == 3){
            risultato = primo * secondo;
            printf("%f * %f = %f\n", primo, secondo, risultato);
        }
        else if (numero == 4){
            risultato = primo - secondo;
            printf("%f / %f = %f\n", primo, secondo, risultato);
        }
    } else if (numero == 5){
        printf("Grazie e arrivederci\n");
    } else {
        printf("Errore, riprova!\n");

    } */
    } while(numero != 5);
    return 0;
}