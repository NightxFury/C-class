#include <stdio.h>

int main() {
   int number;
   printf("Enter Number:");
   scanf("%d",&number);
   if (number%2==0){
       printf("Even number");
       
   }
   if(number%2 != 0){
       printf("odd Number");
   }

    return 0;
}
