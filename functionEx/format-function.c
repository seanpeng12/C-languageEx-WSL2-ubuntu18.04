#include <stdio.h>
#define x 2
#define y 3
#define z 4
int main(void)
{
	int a[x][y][z];
	for (int i = 0; i<x ;i++){
		for(int j = 0; j<y ; j++){
			for(int k = 0; k<z ; k++){
				printf("%p ",&a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	//皆a[1][0][0]之位址
	printf("%p\n",a + 1);//a  有"2"個3*4陣列
	printf("%p\n",a[0] + 3); //a[0] 有"3"個1*4陣列
	printf("%p\n",a[0][0] + 12);  //a[0][0]有"1"列:000 001 002 003 四個元素
	printf("%p\n",&(a[1][0][0]));  //a[1][1][0] 為元素

	return 0;
}
