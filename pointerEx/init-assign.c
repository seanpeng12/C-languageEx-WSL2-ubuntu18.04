#include <stdio.h>
#include <stdbool.h>
void foo(void);

int main(void){
	int i , k;
	printf("請輸入i的初始值:");
	scanf("%d",&i);
	int *iptr1 ,*iptr2;
	iptr2 = iptr1 = &i; //儲存i的位址
	printf("\n");
	printf("i = %d\n",i);
	printf("&i = %p\n",&i);
	printf("iptr1 = %p\n",iptr1);
	printf("&iptr1 = %p\n",&iptr1);
	printf("iptr2 = %p\n",iptr2);
	printf("&iptr2 = %p\n",&iptr2);
	*iptr1 = 10;
	printf("新的i = %d\n",i);
	
	foo();
	return 0;
}

void foo(void){
	int n = 10;
	int *iptr = &n;
	printf("&(*iptr) = %p\n",&(*iptr));
	printf("*(&iptr) = %p\n",*(&iptr));
}
