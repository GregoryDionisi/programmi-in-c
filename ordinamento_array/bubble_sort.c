#include <stdio.h>
#include <stdlib.h> //fondamentale per usare rand()

int main(){
    int v[10], i, j, temp;

    printf("Stampo array disordinato\n");
    for(i=0; i<10; i++){
        v[i] = rand() % 100; //rand() per generare numeri casuali. % 100 serve per geneare numeri da 0 a 99
        printf("%d \t", v[i]); // \t è il tabulatore orizzontale, mette i valori in colonne
    }

    // Ordinamento dell'array con Bubble Sort
    for(i=0; i<9; i++){ // ripeto il ciclo più volte per ordinare tutti gli elementi. Usiamo 9 perchè il numero più grande, che si trova in fondo, ormai non lo contiamo più
        for(j=0; j<9-i; j++){ // confronto gli elementi adiacenti
            if(v[j]>v[j+1]){
                temp = v[j]; // scambio i due elementi
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }        
    }

    printf("\nStampo array ordinato\n");
    for(i=0; i<10; i++){
        printf("%d \t", v[i]);
    }
}
