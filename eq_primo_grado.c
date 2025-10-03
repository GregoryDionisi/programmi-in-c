#include <stdio.h>

int main(){
    int a,b;
    float x;

    printf("Inserisci il coefficiente a:\n");
    scanf("%d", &a);

    printf("Inserisci il coefficiente b:\n");
    scanf("%d", &b);


    if(a == 0){
        printf("Coefficiente a=0\n");
        if(b == 0){
            printf("Indeterminata, retta coincide con l'asse x\n"); //indeterminata ovvero infinite soluzioni
        } else {
            printf("Impossibile, retta parallela all'asse x\n");
        }
    }else{
        printf("Coefficiente a!=0\n");
        //x = -b/a; //da un risultato non veritiero perchè a e b sono intere
        x = (float)-b/a; //si attua quindi il casting ovvero il cambio temporaeno del tipo di variabile ad a e b
        printf("La retta interseca l'asse x in %f\n", x);
    }
    return 0;
}