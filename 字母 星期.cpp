#include "stdio.h"
int main()
{
	char letter;
	printf("PLEASE INPUT FIRST LETTER\n\n");
    letter=getchar();
	switch(letter)
	{
		case'M':printf("Monday\n");break;
		case'T':printf("PLEASE INPUT SECOND LETTER\n");
		getchar();
		if(letter=getchar()=='u')
		{
			printf("Tuesday\n");break; 
		}
		else if(letter=getchar()=='h')
		{
		    printf("Thursday\n");break;	
		}
		else
		{
		    printf("DATA ERROR!");break;	
		} 
		case'W':printf("Wednesday\n");break;
		case'F':printf("Friday\n");break;
		case'S':printf("PLEASE INPUT SECOND LETTER\n");
		getchar();
		if(letter=getchar()=='a')
		{
			printf("Saturday\n");break;
		}
		else if(letter=getchar()=='u')
		{
			printf("Sunday\n");break;
		}
		else
		{
		    printf("DATA ERROR!");break;	
		}
		default:printf("PLEASE INPUT AGAIN!");break;
	}
	return 0;	
}