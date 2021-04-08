#include<stdio.h>
void main()
{
	int a,b;
	char c;
	printf("enter the two values");
	scanf("%d%d",&a,&b);
	scanf("%c",c);
	if(c=='+')
	{
		printf("addition is %d",a+b);
	
	}
	 else if(c=='-')
	{
		printf("sub is %d",a-b);
	}
	else if(c=='*')
	{
		printf("mul is %d",a*b);
	}
	else if(c=='/')
	{
		printf("div is %d",a/b);
	}
	else
	{
		printf("it is invalid one");
	}
}

	
	
