#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[10], i, j, temp, min;

    printf("Stampo array disordinato:\n");
    for(i = 0; i < 10; i++) {
        v[i] = rand() % 100;
        printf("%d\t", v[i]);
    }

    // Selection Sort
    for(i = 0; i < 9; i++) { //usiamo 9 perchè alla fine di tutto il ciclo il numero che rimane è per forza il maggiore rispetto agli altri e quindi non lo contiamo
        min = i;
        for(j = i + 1; j < 10; j++) {
            if(v[j] < v[min]) {
                min = j;
            }
        }
        temp = v[i];
        v[i] = v[min];
        v[min] = temp;
    }

    printf("\n\nStampo array ordinato:\n");
    for(i = 0; i < 10; i++) {
        printf("%d\t", v[i]);
    }

    return 0;
}
