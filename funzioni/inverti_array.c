#include <stdio.h>
#include <stdlib.h>

void inverti(int array[], int n);

int main() {
    const int N = 8;
    int v[N], i;

    for(i = 0; i < N; i++){
        v[i] = rand() % 10;
        printf("%d\t", v[i]);
    }
    printf("\n");

    inverti(v, N);

    for(i = 0; i < N; i++){
        printf("%d\t", v[i]);
    }
    printf("\n");

    return 0;
}

void inverti(int array[], int n) {
    int temp, i;
    for(i = 0; i < n/2; i++){
        temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }
}
