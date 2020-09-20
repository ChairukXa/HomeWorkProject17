#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void ZeroOrFifty(int x)
{
	if (x < 0)
	{
		printf("Please insert the Number that is great or equal zero");
	}
	else
	{
		if (x >= 50)
		{
			printf("Pass");
		}
		else
		{
			printf("Fail");
		}
	}
}
int main()
{
	int num;
	printf("Enter Number :");
	scanf("%d", &num);
	ZeroOrFifty(num);
	return 0;
}