#include"stdio.h"
int main()
{
	float x;
	printf("input x=");
	scanf("%f",&x);
	if(x>=100)
	printf("您输入的成绩不合法，请重新输入\n");
	else if(90<=x&&x<=100)
	printf("%f 成绩等级为:A\n",x);
	else if(80<=x&&x<=89)
	printf("%f 成绩等级为:B\n",x);
	else if(70<=x&&x<=79)
	printf("%f 成绩等级为:C\n",x);
	else if(60<=x&&x<=69)
	printf("%f 成绩等级为:D\n",x);
	else if(0<=x&&x<60)
	printf("%f 成绩等级为:E\n",x);
	else
	printf("您输入的成绩不合法，请重新输入\n");
	return 0;
}