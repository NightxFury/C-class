//swaping tow numbers
#include<stdio.h>
void swap(int *a,int *b){
	int x;
	x = *a;
	*a = *b;
	*b = x;
}
int main(){
	int num1,num2;
	printf("Enter First number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	swap(&num1,&num2);
	 printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
	
	return 0;
}
