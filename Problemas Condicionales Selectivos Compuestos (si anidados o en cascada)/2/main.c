#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Ingresa 1er numeros\n");
    scanf("%d",&a);
    printf("Ingresa 2do numeros\n");
    scanf("%d",&b);
    printf("Ingresa 3er numeros\n");
    scanf("%d",&c);

    if (a > b){
        if (a > c){
            printf("El mayor de los 3 numeros es: %d",a);
        }
        else{
            printf("EL mayor de los 3 numeros es: %d",c);
        }
    }
    else{
      if (b > c){
          printf("El mayor de los 3 numeros es: %d",b);
      }
      else{
          printf("El mayor de los 3 numeros es: %d",c);
      }
    }
    return 0;
}
