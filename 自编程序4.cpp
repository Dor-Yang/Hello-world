#include"stdio.h"
int main()
{
	int a,b,c,d,e,max,min,m1,m2,m3,n1,n2,n3;
	printf("请输入5个整数：");
	scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
	m1=(a>b)? a:b;
	m2=(m1>c)? m1:c;
	m3=(m2>d)? m2:d;
	max=(m3>e)? m3:e;
	printf("5个整数中最大值为：%d\n",max);
	n1=(a<b)? a:b;
	n2=(n1<c)? n1:c;
	n3=(n2<d)? n2:d;
	min=(n3<e)? n3:e;
	printf("5个整数中最小值为：%d\n",min);
	return 0;
} 