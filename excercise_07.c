#include<stdio.h>
#include<conio.h>

int main(){
	int a;
	int max;
	do{
		printf("\nEnter your number: ");
		scanf("%d", &a);
		if(a > max){
			max = a;
		}
	}while(a != 0);
	printf("\nMaximum is: %d", max);
	
	return 0;
}
