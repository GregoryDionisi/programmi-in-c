#include <stdio.h>
#include <stdlib.h> //fondamentale per usare rand()

int main(){
    int v[10], i, j, temp;

    printf("Stampo array disordinato\n");
    for(i=0; i<10; i++){
        v[i] = rand() % 100; //rand() per generare numeri casuali. % 100 serve per geneare numeri da 0 a 99
        printf("%d \t", v[i]); // \t è il tabulatore orizzontale, mette i valori in colonne
    }

    // Ordinamento dell'array con l'Insertion Sort
    for(j = 1; j < 10; j++){
        temp = v[j];
        i = j - 1;

        while(i >= 0 && v[i] > temp){
            v[i+1] = v[i];
            i--;
        }
        v[i+1] = temp;
    }

    printf("\nStampo array ordinato\n");
    for(i=0; i<10; i++){
        printf("%d \t", v[i]);
    }
}
