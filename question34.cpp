#include<stdio.h>
int add (int a, int b){
	return a+ b;
}
int main(){
	int a,b,sum;
	printf("Enter Your numbers:");
	scanf("%d,%d",&a,&b);
	sum = add(a,b);
	printf("The value of the sum is %d",sum);
	return 0;
}
