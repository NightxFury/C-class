#include<stdio.h>
int main(){
	int n;
	printf("Enter Your number:");
	scanf("%d",&n);
	int count = 0;
	while (n != 0){
		n =n/10;
		count++;
	}
	return 0;
}

