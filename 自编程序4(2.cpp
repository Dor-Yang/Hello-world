#include"stdio.h"
int main()
{
	int a,b,c,d,e,max,min,m1,m2,m3,n1,n2,n3; 
	printf("请输入5个整数：");
	scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
	max=a>b?a:b>c?b:c>d?c:d>e?d:e;
	printf("5个整数中最大值为:%d\n",max);
	min=a<b?a:b<c?b:c<d?c:d<e?d:e;
	printf("5个整数中最小值为:%d\n",min);
    return 0;
} 