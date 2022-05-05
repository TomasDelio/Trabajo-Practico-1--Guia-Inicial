#include <stdio.h>
#include <stdlib.h>

int main()
{
    float compra=0, descuento=0, comprafinal=0;

    printf("ingrese toda su compra. \n");
    scanf("%f", & compra);

    if(compra>5000){

    descuento=compra*0.2;
    compra=compra-descuento;
    printf("Su compra es de %f",compra);
    }
    else if ((compra>=0 )&&(compra<=5000)){
        printf("Su compra es de %f",compra);
    }


        return 0;
}
