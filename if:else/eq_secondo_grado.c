#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    //si posso dichiarare le variabili dopo quando servono in modo da utilizzare la memoria in maniera ottimizzata
    //la vita di una variabile comincia quando viene dichiarata fino alla graffa che la contiene che corrisponde a quanta memoria si utilizza

    printf("Inserisci il coefficiente a:\n");
    scanf("%d", &a);
    printf("Inserisci il coefficiente b:\n");
    scanf("%d", &b);
    printf("Inserisci il coefficiente c:\n");
    scanf("%d", &c);

    if(a == 0){
        //risoluzione di primo grado
    } else {
        //            int    int int int
        float delta = b*b - 4*a*c; //CASTING IMPLICITO, ovvero converte il risultato (che è int essendo operazioni solo fra interi) poi in float da solo in automatico

        if(delta<0){
            printf("Impossibile non ci sono soluzioni\n");
        } else {
            if(delta>0){
                //          int      float    int int in questo caso sqrt produce un double e di conseguenza b viene promosso a double. La divisione poi lo fa di nuovo con un double perchè 2 e a vengono promossi. Infine il risultato double viene promosso a float(CASTING IMPLICITO)
                float x1 = (-b + sqrt(delta)) / 2*a;//la promozione avviene solo da piccoli a grandi e non il contrario
                float x2 = (-b - sqrt(delta)) / 2*a;//SCOPE o AMBITO DI VISIBILITà (concetto se dichiari la variabile all'inizio o solo all'interno dell'if)
                printf("Soluzioni X1 = %f X2 = %f", x1, x2);
            } else {
                float x=-b / 2*a;
                printf("Unica soluzione X=%f\n",x);
            }
        }
    }
    return 0;
}