#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1,numero2;
    printf("Escribe el primer numero \n");
    scanf("%i", & numero1);
    printf("Escribe el segundo numero\n");
    scanf("%i", & numero2);

if (numero1<numero2){
    printf("%i" ,numero1);
    printf("%i" ,numero2);
}
else {
    printf("%i" ,numero2);
    printf("%i" ,numero1);
}


    return 0;
}
