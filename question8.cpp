#include <stdio.h>

int main() {
  int number;
  printf("Enter Your Number:");
  scanf("%d",&number);
  if(number%5 ==0 && number%3 == 0 ){
      printf("Divisible");
  }
  else{
      printf("Not divisible");
  }
    return 0;
}
