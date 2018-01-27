#include<stdio.h>
#include<stdlib.h>
int main()
{	
	//条件编译
	int is_execute = 8;
	#if is_execute
		printf("哈哈哈，你妹的\n");
	#endif 
	
	return 0;
}
