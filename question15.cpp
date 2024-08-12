#include<stdio.h>
int main(){
	int n;
	printf("Enter Your Number:");
	scanf("%d \n",&n);
	for(int i =1; i<=10;++i){
		printf("%d * %d = %d\n",n*i);
	}
	return 0;
}
