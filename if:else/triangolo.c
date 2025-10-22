#include <stdio.h>

int main(){
    int a, b, c;

    printf("Inserisci il primo lato:\n");
    scanf("%d", &a);
    printf("Inserisci il secondo lato:\n");
    scanf("%d", &b);
    printf("Inserisci il secondo lato;\n");
    scanf("%d", &c);

    if((a == b) && (b == c)){
        printf("Il triangolo è equilatero\n");
    } else {
        //TECNICA DEL CORTOCIRCUITO: la situazione che evita di verificare tutte le condizioni. Nell'or la prima che si verifica evita di far verificare le altre. Nell'and la prima condizione che è falsa
        if(a == b || b == c || a == c){
            printf("Il triangolo è isoscele\n");
        } else {
            printf("Il triangolo è scaleno\n");
        }
    }

    if((a*a == b*b + c*c) || (a*a + b*b == c*c) || (a*a + c*c == b*b)){
        printf("Il triangolo è rettangolo\n");
    }
    return 0;
}