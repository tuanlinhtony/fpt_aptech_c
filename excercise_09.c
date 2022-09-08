#include<stdio.h>
#include<conio.h>

int main(){
	int a,b, tmp;
	
	printf("\nEnter the number a: ");
	scanf("%d", &a );
	printf("\nEnter the number b: ");
	scanf("%d", &b );
	
	while(b != 0) {
        tmp = a % b;
   		printf("\ntmp: %d", tmp);
        a = b;
  		printf("\na = %d", a);
        b = tmp;
       	printf("\nb = %d", b);
        printf("%d\t", a);
    }	
    
    
    return 0;
}	
