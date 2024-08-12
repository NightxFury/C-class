#include<stdio.h>
int main(){
	int n;
	printf("Enter your number:");
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(2%n==0){
			printf("Even Number");
		}
		else{
			printf("Odd Number");
		}
	}
	return 0;
}
