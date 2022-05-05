#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total,descuento=0,preciofinal;

    printf("Ingrese el total de la compra :\n");
    scanf("%f" ,& total);

    descuento = total * 0.15;
    preciofinal = total - descuento;

    printf("El total a pagar es de  : $ \n", preciofinal);
    printf("El descuento aplicado es : $ %.2f \n",descuento);

    return 0;
}
