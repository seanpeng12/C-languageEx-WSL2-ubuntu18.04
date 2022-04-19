#include <stdio.h>
#include <string.h> //用以使用相關字串函式
#define STRINGLEN 80
int main(void){
	char string[STRINGLEN];
	char *ptr = string;
	scanf("%s", ptr);
	printf("%s\n",ptr);

	int i = 0;
	while(ptr[i] != '\0'){
		printf("%c", ptr[i]);
		i++;
	}

	//strlen用法
	printf("\n%ld",strlen(ptr));

	//strcpy
	printf("================\n");
	char str1[80] = "from";
	char str2[80] = "to";

	strcpy(str1, str2);
	printf("%s\n", str1);
	printf("%s\n", str2);
	//strcat

	//strncpy
	//strncat

	//strcmp
	//strncmp

	//strchr
	//strrchr
	//strstr

	//strspn
	//strcspn

	//strtok
	
	return 0;
}
