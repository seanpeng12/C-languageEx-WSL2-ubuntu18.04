#include <stdio.h>
int main(void)
{
	//印出32~127的ascii碼
	printf("0123456789abcdef\n");
	for(int i = 2; i< 8;i++){
		for(int j = 0;j<16;j++){
			char c = i* 16 + j;
			printf("%c",c);
		}
		printf("\n");
	}

	printf("127為:%d",127);
	return 0;
}
