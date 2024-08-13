#include<stdio.h>
int main(){
	int n;
	printf("Enter your number:");
	scanf("%d",&n);
	
	int product =1;
	for(int i = 1; i<=n;i++){
		product =product*i;
			printf("Factorial of %d is :%d\n",product);
	}
//	printf("Factorial is %d",product);
	return 0;
}
