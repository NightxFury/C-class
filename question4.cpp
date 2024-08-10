#include <stdio.h>

int main() {
   int number;
   printf("Enter Year:");
   scanf("%d",&number);
   if (number%4==0){
       if (number%100==0){
       	if(number%400==0){
       		printf("Leap Year");
		   }
		   
		   }
	   }
	   
       
   }
   else{
   	printf("Not a leap year");
   }
   

    return 0;
}
