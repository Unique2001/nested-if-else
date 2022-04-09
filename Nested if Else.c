#include<stdio.h>
int main()
{
	int a;
	printf("Enter your number:");
	scanf("%d",&a);
	if(a%2==0)
	{
		if(a>0)
		{
			printf("%d is Even and Positive",a);
		}
		else
		{
			printf("%d is Even but not Positive",a);
		}
	}
	else
	{
		if(a<0)
		{
			printf("%d is Odd and Negative",a);
		}
		else
		{
			printf("%d is Odd and Positive",a);
		}
		
	}
}
