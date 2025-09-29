#include <stdio.h>

int main(){
    float b = 5;
    float h = 3;
    float area = (b*h)/2.0; //bisogna cambiare includendo la virgola perchè sennò viene considerato un intero nella moltiplicazione non è un problema (si può lasciare anche int b e h) ma la divisione deve essere float
    printf("Area triangolo: %f\n", area);
    return 0;
}
/*
- Casting: promuovere una variabile cambiando il tipo: risultato = ((float)base * altezza)/2
- Errore del segmentation fault: il programma si ferma e butta via tutti i risultati che ha calcolato
*/