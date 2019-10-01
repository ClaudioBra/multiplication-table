#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, x;

printf("Valor: "); scanf("%d", &x);

   for(i = 1; i <= 10; i++){
   printf("%d * %d = %d\n", i, x, i*x);


   }
    return 0;
}
