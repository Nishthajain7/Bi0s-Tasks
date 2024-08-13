#include <stdio.h>
int main() {

   int a, b, product=0;
   printf("Enter first number: ");
   scanf("%d", &a);
   printf("Enter second number: ");
   scanf("%d", &b);

   int i=0;

   while (i<b)
   {
    product += a;
    i++;
   }
   
   printf("Their product is %d", product);
}


