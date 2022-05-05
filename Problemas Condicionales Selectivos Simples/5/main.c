#include <stdio.h>
#include <stdlib.h>

int main()
{
    int precioinical=0,cantcamisas=0,preciofinal=0;
    printf("Cantidad de camisas que va a comprar \n");
    scanf("%i", &cantcamisas);
    printf("Precio total de todas las camisas que va a comprar \n");
    scanf("%i", &precioinical);

    if(cantcamisas<3){
        preciofinal=precioinical-precioinical*0.1;
    }
    else{
        preciofinal=precioinical-precioinical*0.2;

    }
    printf("El precio a pagar con el descuento es de %i",preciofinal);

    return 0;
}
