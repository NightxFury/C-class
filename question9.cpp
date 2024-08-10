#include <stdio.h>

int main() {
  int number;
  printf("Enter Your Number:");
  scanf("%d",&number);
  if(number > 99 && number < 1000){
      printf("Three digit Number");
  }
  else{
      printf("It is not Three digit number");
  }
    return 0;
}
