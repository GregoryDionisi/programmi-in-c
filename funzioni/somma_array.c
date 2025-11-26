#include <stdio.h>
#include <stdlib.h>

int somma(int array[], int n);

int main(){
    const int N = 5;
    int v[N], i;

    for(i = 0; i < N; i++){
        v[i] = rand() % 10;
        printf("%d \t", v[i]);
    }
    printf("\nSomma degli elementi: %d\n", somma(v, N));
}

int somma(int array[], int n){
    int somma = 0, i;
    for(i = 0; i < n; i++){
        somma+=array[i];
    }
    return somma;
}