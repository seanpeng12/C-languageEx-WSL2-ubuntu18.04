#include <stdio.h>
#include <stdbool.h>
#define arraySize 20
int addTwo(int a);
int addTen(int a);
int processArray(int array[], int n);
int main(void){
	//形式參數formal parameter: callee函式宣告部分,一定是變數
	//實際參數actual parameter: caller實際呼叫的參數 可以是算式
	//C語言的參數傳遞機制：先算出實際參數 當作對應的形式參數初始值
	printf("%d",addTwo(addTen(30)));

	//一維陣列
	//當要將array(20 items)作為實際參數 來呼叫函式 該函式的形式參數不用宣告大小(也無從宣告)
	//且省略寫成array[]  callee接收到的是a的起始記憶體位址 也就是說array指向a  兩者修改有連動關係
	int a[arraySize] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	
	//另一種建立陣列方式
	//int a[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	//int size = sizeof(a)/sizeof(int);

	int b[3][4] = {0};
	(processArray(a,arraySize)) ? printf(" True! a[] 與 array[]相同\n") : printf("False!\n");
	return 0;
}

int addTen(int a){
	return (a += 10);
}

int addTwo(int a){
	int temp = a;
	temp += 2;
	return temp;
}

int processArray(int array[], int n){ //callee收到a的記憶體位址!! 大小要另外用n傳送
	bool flag = false;
	array[0] = 10;
	for(int i=0;i<n;i++){
		(array[i] == i) ? (flag = true) : (flag = false);
	}
	return flag;
}


