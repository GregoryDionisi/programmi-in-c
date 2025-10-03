#include <stdio.h>
#include <math.h>
/*n - m(k-1) e rimangono le stelle più vicine di ogni osservazione. Poi pongo l'equazione a 1 visto che tra le stelle rimanenti voglio una stella che è quella più vicina tra tutte
m = (n - 1)/(k -1)*/
int main(){
    int n, k, m;

    printf("Inserisci il numero di stelle:\n");
    scanf("%d", &n);
    printf("Quante stelle può osservare il telescopio:\n");
    scanf("%d", &k);

    if((k > 0) && (n > 0)){
        //         int int  int int
        //float m = (n - 1) / (k - 1);
        //         float int int
        float m = ceil((float)(n - 1) / (k - 1)); //visto che voglio il risultato con la virgola faccio il CASTING e poi approssimo il risultato tramite ceil
        printf("Servono %f osservazioni\n", m);

        //SOLUZIONE ALTERNATIVA: più efficiente perchè evita l'include di math (visto che non usa ceil) e inoltre le operazioni a interi è più veloce rispetto a quella con float
        int m1 = (n - 1) / (k - 1); //ottiene risultato senza virgola
        int resto = (n - 1) % (k - 1);
        if(resto != 0){
            m1 = m1 + 1; //simula il ceil e lo "approssima" visto che il risultato era già senza virgola e basta aggiungere 1
        }
        printf("Servono %d osservazioni\n", m1);
    } else {
        printf("Cambia telescopio\n");
    }
    return 0; //se esce 0 vuol dire che il programma è terminato correttamente
}