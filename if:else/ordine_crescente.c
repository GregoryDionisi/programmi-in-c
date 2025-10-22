#include <stdio.h>

int main(){
    int a, b, c, max, min, med;

    printf("Inserisci il primo numero:\n");
    scanf("%d", &a);
    printf("Inserisci il secondo numero:\n");
    scanf("%d", &b);
    printf("Inserisci il terzo numero:\n");
    scanf("%d", &c);

    //SOLUZIONE MENO EFFICIENTE
    /*if(a > b){
        if(a > c){
            if(b > c){
                printf(" %d %d %d\n", c, b, a);
            } else {
                printf(" %d %d %d\n", b, c, a);
            }
        }
    }*/

    //SOLUZIONE PIù EFFICIENTE
    if(a > b){
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    if(c < min){
        med = min;
        min = c;
    } else {
        if(c < max){
            med = c;
        } else {
            med = max;
            max = c;
        }
    }
    printf(" %d %d %d\n", min, med, max);
    return 0;
}