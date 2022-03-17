#include <stdio.h>
#include <string.h>
#define STRLEN 80
int main(void)
{
	char string[STRLEN];
	char *ptr = string;
	printf("請輸入一個要反轉的字串 注意中間不可空格:\n");
	scanf("%s",ptr);
	printf("反序印出:\n");
	for(int i=(strlen(ptr)-1);i >= 0;i--){
		printf("%c",ptr[i]);
	}
	printf("\n");

	//另法
	char string2[STRLEN];
	strcpy(string2 ,string);
	char *ptr2 = string2;
	for(int i = 0;i < STRLEN-1 ; i++){
		int temp = ptr2[i];
		ptr2[i] = ptr2[i+1];
		ptr2[i+1] = temp;
	}
	printf("%s",ptr2);
}

