#include <stdio.h>

int max(int x, int y);

int main(){
    int a, b;

    printf("Inserisci un numero:\n");
    scanf("%d", &a);
    printf("Inserisci un numero;\n");
    scanf("%d", &b);
    printf("Il maggiore tra i due numeri è %d\n", max(a, b));

}

int max(int x, int y){
    if(x > y){
        return x;
    } else {
        return y;
    }
}