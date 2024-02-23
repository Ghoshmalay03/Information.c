//WAP to store your name, city, section, roll no. and CGPA in the variables and print them.
#include<stdio.h>
int main(void){
	char string[]="%s";
	char string_1[]="%s";
	char string_2[]="%s";
	int roll_no;
	float CGPA;
	
	printf("Enter your name: ");
	scanf("%s", &string);
	printf("Residence: ");
	scanf("%s", &string_1);
	printf("Section: ");
	scanf("%s", &string_2);
	printf("Roll no.: ");
	scanf("%d", &roll_no);
	printf("CGPA: ");
	scanf("%f", &CGPA);
	
	printf("Myself %s\n", string);
	printf("From %s\n", string_1);
	printf("Section: %s\n", string_2);
	printf("Roll_no: %d\n", roll_no);
	printf("CGPA: %.1f\n", CGPA);
	
	return 0;
}
