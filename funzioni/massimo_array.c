#include <stdio.h>
#include <stdlib.h>

int massimo(int array[], int n);

int main(){
    const int N = 5;
    int v[N], i;

    for(i = 0; i < N; i++){
        v[i] = rand() % 10;
        printf("%d \t", v[i]);
    }

    printf("\nMassimo del primo vettore: %d\n", massimo(v, N)); //ricordati che una funzione che ritorna mettila nel printf
}

int massimo(int array[], int n){
    int i, max = array[0];

    for(i=1; i<n; i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    return max;
}
