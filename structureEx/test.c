#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct student{
	char name[10];
	int male;
	int age;
}sean;

int main(void){
	//initialized
	strcpy(sean.name, "sean");
	sean.male = 1;
	sean.age = 23;
	//
	printf("%s",sean.name);
	return 0;
}
