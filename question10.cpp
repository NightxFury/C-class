#include <stdio.h>

int main() {
 int L;
 printf("Enter Length:");
 scanf("%d",&L);
 
 int B;
 printf("Enter Breadth");
 scanf("%d",&B);
 
 int A = (L*B);
 int P = 2*(L+B);
 if (A > P){
 	printf ("Area is greater than Perimeter");
 }
 else{
 	printf("Not");
 }
    return 0;
}
