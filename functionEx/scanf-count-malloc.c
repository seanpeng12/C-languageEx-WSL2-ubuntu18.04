#include <stdio.h>
#include <stdlib.h> //要使用malloc , free必須引入
#include <assert.h> //幫助偵錯用
int main(void){
	int data,sum;
	data = sum = 0;
	while(scanf("%d",&data) != EOF){ //ctrl+D結束輸入
		sum += data;
	}

	printf("%d",sum);
	return 0;
}
