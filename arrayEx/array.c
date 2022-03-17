#include <stdio.h>
#include <stdbool.h>
#define arraySize 3
int main()
{
	int i[arraySize] = {0,0,0};
	printf("%ld\n",sizeof(i[0]));
	printf("%ld\n",sizeof(i));
	for(int j= 0; j<arraySize; j++){
	printf("%p\n", &i[j]);
	}

	//print address
	printf("&i is %p\n", &i);
	printf("i is %p\n", i);
	printf("&(i[0]) is %p\n",&i[0]);
	printf("i + 2 is %p\n",i + 2);
	printf("&i[2] is %p\n",&i[2]);

	//ex
	int keys[] = {6,7,8,9,10};
	int size = sizeof(keys)/sizeof(int);
	int key;
	scanf("%d", &key);
	bool found = false;
	for(int i = 0; i < size ; i++){
		if (key == keys[i]){
			found = true;
		}
	}
	printf("%d",found);






	return 0;
}
