#include <stdio.h>
/* swap */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int i, j;
	i = 10;
	j = 30;
	swap(&i,&j);
	printf("%d %d", i , j);
	return 0;
}
