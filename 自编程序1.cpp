#include "stdio.h"
int main()
{
	int x;
	scanf("%d",&x);
	if(x%3==0&&x%5==0&&x%7==0)
	printf("%d 能同时被3，5，7整除\n",x);
	else if(x%3==0&&x%5==0)
    printf("%d 能同时被3，5整除\n",x);
    else if(x%3==0&&x%7==0)
    printf("%d 能同时被3，7整除\n",x);
    else if(x%5==0&&x%7==0)
    printf("%d 能同时被5，7整除\n",x);
    else if(x%3==0)
    printf("%d 能被3整除\n",x);
    else if(x%5==0)
    printf("%d 能被5整除\n",x);
    else if(x%7==0)
    printf("%d 能被7整除\n",x);
    else
    printf("%d 不能被3，5，7任一个整除\n",x);
    return 0;
}