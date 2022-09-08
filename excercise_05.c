#include<stdio.h>
#include<conio.h>

int main(){
	int i , j , result;
	for(i = 2; i <= 10; i++){
		for(j = 1; j <= 10; j++){
			result = i * j;
			printf("%d\t", result);
		}
		printf("\n");
	}
	return 0;
}
