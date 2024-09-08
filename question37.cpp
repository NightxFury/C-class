 #include <stdio.h>
 int factorial(int n){
 	int fact =1;
 	for(int i =1; i<=n;i++){
 		fact = fact*1;
	 }
 }
 int main (){
 	int n, r,ncr;
 	printf("Enter n :");
 	scanf("%d",&n);
 	printf("Enter r :");
 	scanf("%d",&r);
 	ncr = factorial(n)/(factorial(r))*(factorial(n-r));
 	printf("%d",ncr);
 	
 	return 0;
 }
