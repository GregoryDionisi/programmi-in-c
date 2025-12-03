/* - Scrivere un programma che dichiara una variabile
- Riempie la variabile con un valore da tastiera
- Dichiara un puntatore
- Crea un alias alla prima variabile
- Modifica la variabile usando l’alias */

#include <stdio.h>

int main(){
    int pippo, *p;

    printf("Inserisci un valore: ");
    scanf("%d", &pippo);
    printf("Hai inserito %d\n", pippo);

    p = &pippo;
    *p = 15;
    printf("Hai inserito %d\n", pippo);
}