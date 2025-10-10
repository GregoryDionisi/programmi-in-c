#include <stdio.h>

int main(){
    int numero;
    do
    {
    printf("Inserisci un numero da 1 a 7 (0 per uscire):\n");
    scanf("%d", &numero);
    /*if(numero == 1)
    {
        printf("Lunedì\n");
    }
    else if (numero == 2)
    {
        printf("Martedì\n");
    } 
    else if (numero == 3)
    {
        printf("Mercoledì\n");
    }
    else if (numero == 4)
    {
        printf("Giovedì\n");
    }
    else if (numero == 5)
    {
        printf("Venerdì\n");
    }
    else if (numero == 6)
    {
        printf("Sabato\n");
    }
    else if (numero == 7)
    {
        printf("Domenica\n");
    }*/
   //se i casi somo tanti però sarebbe meglio utilizzare lo switch case
   switch (numero)
   {
    case 0:
        printf("Grazie e arrivederci\n");
        break;
    case 1:
        printf("Lunedì\n");
        break;
    case 2:
        printf("Martedì\n");
        break;
    case 3:
        printf("Mercoledì\n");
        break;
    case 4:
        printf("Giovedì\n");
        break;
    case 5:
        printf("Venerdì\n");
        break;
    case 6:
        printf("Sabato\n");
        break;
    case 7:
        printf("Domenica\n");
        break;
    default:
        printf("Errore, riprova!\n");
   }
    } while(numero != 0);
    return 0;
}