#include"stdio.h"
int main()
{
	float rate,capital,deposit=0;
	int n;
	printf("Please input the rate:");
	scanf("%f",&rate);
	printf("Please input the n:");
	scanf("%d",&n);
	printf("Please input the capital:");
	scanf("%f",&capital);
	deposit=capital+capital*n*rate/100;
	printf("The deposit is %f\n",deposit);
	return 0;
}