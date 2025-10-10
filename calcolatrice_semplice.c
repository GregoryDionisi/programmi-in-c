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
   /*switch (numero)
   {
    case 1:
        printf("Inserisci il primo numero:\n");
        scanf("%f", &primo);
        printf("Inserisci il secondo numero:\n");
        scanf("%f", &secondo);
        risultato = primo + secondo;
        printf("Il risultato della somma è %f\n", risultato);
        break;
    case 2:
        printf("Inserisci il primo numero:\n");
        scanf("%f", &primo);
        printf("Inserisci il secondo numero:\n");
        scanf("%f", &secondo);
        risultato = primo - secondo;
        printf("Il risultato della sottrazione è %f\n", risultato);
        break;
    case 3:
        printf("Inserisci il primo numero:\n");
        scanf("%f", &primo);
        printf("Inserisci il secondo numero:\n");
        scanf("%f", &secondo);
        risultato = primo * secondo;
        printf("Il risultato della moltiplicazione è %f\n", risultato);
        break;
    case 4:
        printf("Inserisci il primo numero:\n");
        scanf("%f", &primo);
        printf("Inserisci il secondo numero:\n");
        scanf("%f", &secondo);
        risultato = primo / secondo;
        printf("Il risultato della divisione è %f\n", risultato);
        break;
    case 5:
        printf("Grazie e arrivederci\n");
        break;
    default:
        printf("Errore, riprova!\n");
   }*/
    if (numero > 0 && numero < 5){
        printf("Inserisci il primo numero:\n");
        scanf("%f", &primo);
        printf("Inserisci il secondo numero:\n");
        scanf("%f", &secondo);
        if (numero == 1){
            risultato = primo + secondo;
            printf("Il risultato della somma è %f\n", risultato);
        }
        else if (numero == 2){
            risultato = primo - secondo;
            printf("Il risultato della sottrazione è %f\n", risultato);
        }
        else if (numero == 3){
            risultato = primo * secondo;
            printf("Il risultato della moltiplicazione è %f\n", risultato);
        }
        else if (numero == 4){
            risultato = primo - secondo;
            printf("Il risultato della divisione è %f\n", risultato);
        }
    } else if (numero == 5){
        printf("Grazie e arrivederci\n");
    } else {
        printf("Errore, riprova!\n");

    }
    } while(numero != 5);
    return 0;
}