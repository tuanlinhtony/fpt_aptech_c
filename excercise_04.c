#include<stdio.h>
#include<conio.h>

int main(){
	int i, a, result;
	printf("\nEnter your number: ");
	scanf("%d", &a);
	for(i=1; i<=10; i++){
		result = a * i;
		printf("\nResult of: %d x %d = %d", a, i , result);
		
	}
	printf("\n====================");
	return 0;
}
