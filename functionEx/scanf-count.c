#include <stdio.h>
int main(void)
{
	int data = 0;
	int sum = 0;
	while(scanf("%d", &data) != EOF) {  //scanf,printf的函式可支援不定個數參數 其中scanf當讀不到資料會回傳EOF 
		sum += data;
	}

	printf("%d", sum);
	return 0;
}
