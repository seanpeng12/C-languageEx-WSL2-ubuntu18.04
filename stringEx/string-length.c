#include <stdio.h>
#include <string.h>
#define LENGTH 10
//string-length使用字串函式

void foo(void);
int main(void){
	char str[LENGTH];
	scanf("%s",str);
	int result = strlen(str);
	printf("%d", result);

	foo();
	return 0;
}

void foo(void){
	char source[LENGTH];
	char destination[LENGTH];
	scanf("%s%s",source);
	printf();
}
