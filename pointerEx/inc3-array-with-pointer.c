#include <stdio.h>
void foo(int *a, int n)
{
	int *ptr = a;
	for(int i = 0; i < 2; i++, ptr++){
		*ptr += 3;
	}

	ptr = &(a[2]);
	for(int i = 0; i < 2; i++, ptr++){
		*ptr += 3;
	}
}


int main(void)
{
	int n;
	printf("請輸入陣列個數:");
	scanf("%d" , &n);
	int a[n];
	printf("請輸入%d個元素:",n);
	for (int i = 0; i < n ; i++)
		scanf("%d", &a[i]);

	//用指標來把每個元素加三
	int *ptr = a;
	for (int i = 0; i < n ; i++, ptr++){
		*ptr += 3;
		printf("%d ",a[i]);
	}
	printf("\n");


	//
	foo(a,n);
	printf("=========after foo==========");
	for (int i = 0; i < n ; i++, ptr++){
		printf("%d ",a[i]);
	}
	return 0;
}
