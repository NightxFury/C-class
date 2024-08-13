#include<stdio.h>
int main(){
	int n;
	printf("Enter your number:");
	scanf("%d",&n);
	int sum=0;
	int LastDigit =0;
	while(n!=0){
		LastDigit = n%10;
		sum = sum + LastDigit;
		n = n/10;
	}
	printf("The sum %d",sum);
	return 0;
}
//	int n;
//	printf("Enter your number:");
//	scanf("%d",&n);
//	int sum=0;
//	int LastDigit =0;
//	while(n!=0){
//		LastDigit = n%10;
//		sum = sum + LastDigit;
//		n = n/10;
//	}
//	printf("The sum %d",sum);
	
