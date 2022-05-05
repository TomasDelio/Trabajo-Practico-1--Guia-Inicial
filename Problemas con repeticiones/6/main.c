#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n,resultado;

   printf("Dame un Numero\n");
   scanf("%d",&n);

  for (i = 1; i <= 10; i++){
    resultado = n*i;
   printf("%d x %d = %d \n ",n,i,resultado);
   }
    return 0;
}
