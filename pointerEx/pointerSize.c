#include <stdio.h>
int main(void)
{
	int *iptr = NULL;
	printf("%p\n",iptr);
	printf("%ld\n",sizeof(iptr));
	return 0;
}
