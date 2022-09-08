#include<stdio.h>
#include<conio.h>
#include<math.h>

//Write a program to accept and add three numbers.
int question1page6(){
	int a, b, c;
	
	printf("Enter the number 1: ");
	scanf("%d", &a);
	printf("Enter the number 2: ");
	scanf("%d", &b);
	printf("Enter the number 3: ");
	scanf("%d", &c);
	printf("We have three numbers: %d, %d, %d", a, b, c);
	
	return 0;
}

/*For the following values, write a program to evaluate the expression
	z = a*b+(c/d)-e*f;
	a=10
	b=7
	c=15.75
	d=4
	e=2
	f=5.6
*/
int question2page6(){
	double a, b, c, d, e, f, z;
	a = 10;
	b = 7;
	c = 15.75;
	d =4;
	e=2;
	f = 5.6; 
	
	z = a*b + (c/d)-e*f;
	printf("Result is: %lf", z);
}

//Write a program to evaluate the area and perimeter of the rectangle.
int question3page6(){
	float width, length, area, perimeter;
	
	printf("\nEnter the width of retangle: ");
	scanf("\n%f", &width);
	printf("\nEnter the length of retangle: ");
	scanf("\n%f", &length);
	
	area = width * length;
	perimeter = 2 * (width + length);
	
	printf("\nThe area of rectangle: %.2f", area); 
	printf("\nThe perimeter of rectangle: %.2f", perimeter);
	
}

//Write a program to evaluate the 	.
int question4page6(){
	float radio, height, volume;
	printf("\nWrite a program to evaluate the volume of a cylinder.");
	printf("\nEnter the radio of cylinder: ");
	scanf("\n%f", &radio);
	printf("\nEnter the height of cylinder: ");
	scanf("\n%f", &height);
	
	volume =  3.14 	* pow(radio, 2) * height;
	printf("\nThe volume of a cylinder: %.2f", volume);
}

/* 
	Write a program to evaluate the net salary of an employee given the following
	constraints:
	Basic salary : $ 12000
	DA : 12% of Basic salary
	HRA : $150
	TA : $120
	Others : $450
	Tax cuts – a) PF :14% of Basic salary and b) IT: 15% of Basic salary
	Net Salary = Basic Salary + DA + HRA + TA + Others – (PF + IT)

*/
int question5page6(){
	double DA, PF, IT, netSalary;
	DA = 12000 * 0.12;
	PF = 12000 * 0.14;
	IT = 12000*0.15; 
	netSalary = 12000 + DA + 150 + 120 + 450 - (PF - IT);
	printf("\nThe net salary of an employee: %.2lf", netSalary) ;
		
}

int question1page7(){
	
}

int question2page7(){
	
}

int question3page7(){
	
}

int question1page8(){
	
}

int question2page8(){
	
}

int question3page8(){
	
}

int question4page8(){
	
}

int question5page8(){
	
}

//Write a program that accepts two numbers a and b and checks whether or not a is divisible by b.
int question1page9(){
	int a, b, result;
	printf("\nEnter a number 1: ");
	scanf("\n%f", &a);
	printf("\nEnter a number 2: ");
	scanf("\n%f", &b);
	(a%b == 0)? printf("a isn't divisible by b") : printf("a is divisible by b");
}

int question2page9(){
	int a, b, result;
	printf("\nEnter a number a: ");
	scanf("\n%f", &a);
	printf("\nEnter a number b: ");
	scanf("\n%f", &b);
	(a*b >= 1000)? printf("The product of the two numbers is equal to or greater than 1000.") : printf("The product of the two numbers is not equal to or greater than 1000.");
}

/*
	Write a program to accept 2 numbers. Calculate the difference between the two
	values.
	If the difference is equal to any of the values entered, then display the following
	message:
	Difference is equal to value <number of value entered>
	If the difference is not equal to any of the values entered, display the following
	message:
	Difference is not equal to any of the values entered.
*/
int question3page9(){
	float a, b, difference;
	
	printf("\nWrite a program to accept 2 numbers. Calculate the difference between the two values.");
	printf("\nEnter a number 1: ");
	scanf("\n%f", &a);
	printf("\nEnter a number 2: ");
	scanf("\n%f", &b);
	
	difference = a - b;
	
	if(fabs(difference) == a){
		printf("Difference is equal to value %.2f", a);
	}
	else if(fabs(difference) == b){
		printf("Difference is equal to value %.2f", b);
	}
	else{
		printf("Difference is not equal to any of the values entered.");
	}
	
}

//Montek company gives allowances to its employees depending on their grade as follows.
int question4page9(){
	int salary, allow, total;
	char grade;
	
	printf("\nEnter a salary: ");
	scanf("\n%d", &salary);
	
	printf("\nEnter a grade: ");
	scanf("\n%c", &grade);
	
	if(tolower(grade) == 'a'){
		allow = 300;
	}
	else if (tolower(grade) == 'b'){
		allow = 250;
	}
	else{
		allow = 100;
	}
	
	total = salary * allow;
	printf("=>The salary at the end of the month: %d", total);
}

int question5page9(){
	float marks;
	printf("Input Marks: ");
	scanf("%f", &marks);
	
	if(marks >= 75){	
		printf("grade A");
	}
	else if(marks >= 60 && marks < 75){
		printf("grade B");
	}
	else if(marks >= 45 && marks < 60){
		printf("grade C");
	}
	else if(marks >= 35 && marks < 45){
		printf("grade D");
	}
	else{
		printf("grade E");
	}
}

int main(){
	int question, page;
	printf("\n===================================");
	printf("\nChoose the number of question: ");
	scanf("%d", &question);
	printf("Choose the number of page: ");
	scanf("%d", &page);
	
	
	if (question == 1 && page == 6){
		question1page6();
		main();
	}
	else if(question == 2 && page == 6){
		question2page6();
		main();
	}
	else if(question == 3 && page == 6){
		question3page6();
		main();
	}
	else if(question == 4 && page == 6){
		question4page6();
		main();
	}
	else if(question == 5 && page == 6){
		question5page6();
		main();
	}
	else if(question == 1 && page == 7){
		question1page7();
		main();
	}
	else if(question == 2 && page == 7){
		question2page7();
		main();
	}
	else if(question == 3 && page == 7){
		question3page7();
		main();
	}
	else if(question == 1 && page == 8){
		question1page8();
		main();
	}
	else if(question == 2 && page == 8){
		question2page8();
		main();
	}
	else if(question == 3 && page == 8){
		question3page8();
		main();
	}
	else if(question == 4 && page == 8){
		question4page8();
		main();
	}
	else if(question == 5 && page == 8){
		question5page8();
		main();
	}
	else if(question == 1 && page == 9){
		question1page9();
		main();
	}
	else if(question == 2 && page == 9){
		question2page9();
		main();
	}
	else if(question == 3 && page == 9){
		question3page9();
		main();
	}
	else if(question == 4 && page == 9){
		question4page9();
		main();
	}
	else if(question == 5 && page == 9){
		question5page9();
		main();
	}
	else{
		printf("Can't find the question %d of page %d", question, page);
		main();
	}
}
