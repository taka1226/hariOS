#include <stdio.h>

int main(void)
{
	printf("Hello, world\n");

	goto END;	//	goto命令

	printf("World\n");

END:			//	gotoラベル
	return 0;
}
