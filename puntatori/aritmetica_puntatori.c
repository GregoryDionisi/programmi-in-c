/* Artimetica dei puntatori 
- Riempire un array di 5 elementi con valori casuali
- Stampare l'array
- Usare solamente puntatori e non l'indicizzazione
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[5], *p, i;

    //p = v; //non serve & perchè punta in automatico alla prima cella del vettore

    for(p = v; p < v + 5; p++){
        *p = rand() % 10; //assegno un valore casuale tra 0 e 9
        printf("%d\t", *p); //stampo il valore puntato da p
    }

    printf("\nArray usando v:\n");
    for(i = 0; i < 5; i++){
        v[i] = rand() % 10; //assegno un valore casuale tra 0 e 9
        printf("%d\t", v[i]); //stampo il valore puntato da p
    }
}