#include <stdio.h>

int main(void){
   int i, num = 0;

   printf("Digite um numero entre 1 e 10:");
   scanf("%d",&num);

   for (i = 1; i <= 10; ++i)
   {
       printf("%d X %d = %d\n",num, i, num * i);
   }

   return 0;
}