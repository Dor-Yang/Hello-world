#include "stdio.h"
int main()
{
	int a,b,c,d,deposit; 
	printf("请输入4个整数：");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	deposit=a+b+c+d;
	printf("%d\n",deposit);
	return 0;
}