#include <stdio.h>
int main(void)
{
	double a[5] = {0.1,0.3,0.5,0.7,0.9};
	for(int i= 0; i< 5;i++){
		printf("addr:%p  ",&a[i]);
		printf("數值%lf\n",a[i]);
	}

	double *p = a;
	printf("%p/n", a + 1);
	return 0;
}

