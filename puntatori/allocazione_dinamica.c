/* Allocazione dinamica
- Usare la funzione malloc per allocare dello spazio di numeri scelto dall’utente
*/

#include <stdio.h>
#include <stdlib.h> //il prototipo della funzione malloc() si trova nella libreria stdlib.h

int main(){
    int *v, *p, i, n, somma;

    printf("Caro utente quanti numeri vuoi memorizzare? ");
    scanf("%d", &n); //se metto un valore negativo ovviamente malloc non riuscirà ad allocare spazio

    //malloc alloca lo spazio per v dato da n * sizeof(int) ed è uno spazio consecutivo
    v = malloc(n * sizeof(int)); //sizeof(int) in C restituisce il numero di byte usati per memorizzare un int

    if(v != NULL){ //perchè se malloc() non trova spazio restituisce il puntatore NULL
        for(p = v; p < v + n; p++){
        *p = rand() % 10; //assegno un valore casuale tra 0 e 9
        somma += *p;
        printf("%d\t", *p); //stampo il valore puntato da p
        }
        printf("Media: %f", ((float)somma/n)); //doobbiamo applicare il casting alla somma perchè stiamo facendo una divisione
        printf("\nArray usando v:\n");
        for(i = 0; i < n; i++){
            v[i] = rand() % 10; //assegno un valore casuale tra 0 e 9
            printf("%d\t", v[i]); //stampo il valore puntato da p
        }
        free(v); //per liberare la memoria
    } else {
        printf("Memoria non disponibile");
    }
}