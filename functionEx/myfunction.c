#include <stdio.h>

//前置宣告
int func(int i);
void printDigit(int i, float f, double k);

int main(void)
{
	printf("%d\n",func(10));
	printDigit(10, 3.14 ,3.1415926);

}
int func(int i)
{
	int value = i;
	value ++;
	return value;
}

void printDigit(int i, float f, double k){ //無回傳值
	printf("%d %5.4f %8.7f \n",i,f,k);
	return;
}

