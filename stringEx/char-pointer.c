#include <stdio.h>
#include <string.h> //要使用字串函式需引入
#define STRLEN 80
int main(void)
{
	char string[STRLEN];
	char *ptr = string; //字元指標 需依附一個字元陣列
	scanf("%s",ptr);
	printf("%s\n",ptr); //it will print the string from the given starting address to the null'\0' character.

	for(int i = 0; i < strlen(string) ; i++){ //strlen計算字串長度(不含結尾\0)
		printf("%c ",ptr[i]); //使用指標存取
	}

	char str1[80];
	char str2[] = "programming";
	char *str3 = "programming";
	
	printf("\n%ld\n",sizeof(str1)); //80 因為宣告
	printf("%ld\n",sizeof(str2)); //12 編譯器自己計算 結尾自己多存\0
	printf("%ld\n",sizeof(str3)); //8 因為一個指標大小為8


	//使用字串函式
	printf("%ld\n",strlen(str1)); //0
	printf("%ld\n",strlen(str2)); //11
	printf("%ld\n",strlen(str3)); //11


	return 0;
}
