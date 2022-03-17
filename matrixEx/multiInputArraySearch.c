#include <stdio.h>
#include <stdbool.h>
int main()
{
	//ex
	int keys[] = {6,7,8,9,10};
	int size = sizeof(keys)/sizeof(int);
	int key1 , key2;
	
	printf("目前陣列中元素：");
	int j = 0;
	while(j < size){
		printf("%d ",keys[j]);
		j++;
	}

	printf("\n請輸入2個數字以搜尋是否在陣列內(不同數值以-隔開,否則判斷為同一數值!)：");
	scanf("%d-%d", &key1 ,&key2);
	bool found[] = {0,0};
	for(int i = 0; i < size ; i++){
		if (key1 == keys[i]){
			found[0] = true;
		}
		if (key2 == keys[i]){
			found[1] = true;
		}
	}

	bool flag = false;
	for(int k = 0; k< (sizeof(found)/sizeof(bool)); k++){
		if(found[k]){
			flag = true;
			printf("第%d個輸入元素找到\n",k+1);
		}
	}
	if(!flag)
		printf("not found!\n");





	return 0;
}
