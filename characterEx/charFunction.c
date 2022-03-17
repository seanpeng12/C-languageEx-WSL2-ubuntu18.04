#include <stdio.h>
#include <ctype.h>
int main(void)
{
	/*字元常用函式
	char classification function 字元分類函式
	char conversion function 字元轉換函式

	isalnum 英文字母/數字
	isalpha	英文字母
	islower 小寫英文字母
	lsipper 大寫英文字母
	isdigit 數字
	isxdigit 十六進位數字
	isprint 可顯示字元 含空白
	isgraph 可顯示字元 不含空白
	isspace 空白
	ispunct 標點符號
	iscntrl 控制字元

	tolower
	toupper
	*/
	char c = 126;
	char d = 127;
	printf("char 126是否可顯示?:");
	(isprint(c)) ? printf("true\n") : printf("false\n");
	printf("char 127是否可顯示?:");
	(isprint(d)) ? printf("true\n") : printf("false\n");
	return 0;
}
