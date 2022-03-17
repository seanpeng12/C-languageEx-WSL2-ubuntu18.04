#include <stdio.h>
#include <assert.h>
#define STRLEN 5

int myStrlen(char* ptr){
	int i = 0;
	while(ptr[i] != '\0' && i < STRLEN){
		assert(i <= STRLEN);
		i++;
	}
	return i;
}

int main(void){
	char str[STRLEN];
	char *ptr = str;
	scanf("%s",str);
	printf("%d\n", myStrlen(ptr));
	return 0;
}
