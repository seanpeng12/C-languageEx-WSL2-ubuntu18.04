#include <stdio.h>
#define Len 80
int main(void)
{
	char s[Len] = {'m','a','i','n','(',')','\n','{','\n','}','\n','\0'};
	printf("s[80]之大小(byte):%ld\n",sizeof(s));
	printf("s[0]大小(byte):%ld\n",sizeof(s[0]));
	printf("int大小:%ld\n",sizeof(int));
	//法一:用字元(單引號)陣列來初始化字串(麻煩)
	char temp[] = {'m','k','d','i','r'};
	int length = sizeof(temp) / sizeof(char);
	for(int i = 0; i < length; i++) { //迴圈印字元們
		printf("%c",temp[i]);
	}
	printf("\n%s",s); // 直接一次印出字串

	//法二:使用字串常數(雙引號111)
	char string[Len] = "main()\n{\n}\n"; //注意!編譯器會自動在字串最後面加入\o字元，因此s[11]為\o
	printf("string[11]的值:%d\n",string[11]);

	for(int i = 0; string[i] != '\0';i++) {
		printf("%c",string[i]);
	}

	//input
	//注意 scanf讀字串遇到空格會斷開 而非讀整行!
	//因此 若打入一行由3個空格隔開的句子 while迴圈會跑四次(eg. This is a test.)
	char str[10];
	printf("請輸入資料，請用空格隔開每個子句，ctrl-D結束輸入：");

	while(scanf("%s",str) != EOF){
		printf("%s\n",str); //印字串
		for(int i = 0; i < 10 && str[i] != '\0';i++)
			printf("%c ",str[i]); //每字元後加空格
		printf("\n");

	}

	return 0;
}
