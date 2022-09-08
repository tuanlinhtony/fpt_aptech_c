#include<stdio.h>
#include<conio.h>

int main(){
	int i , a, giaiThua;
	do{
		printf("\nEnter your number: ");
		scanf("%d", a);
		
	}while(a < 0);
	
	for(i = 1; i <= a; i++){
		giaiThua = 1 * i;
	}
	printf("\nGiai thua cua %d", giaiThua);
	
	return 0;
}
