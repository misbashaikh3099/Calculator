#include<stdio.h>
#include<conio.h>
int main ()
{
//	clrscr();
	int num1,num2,sum,sub,multiplication,division;
	char op;
	int result;
	
	printf("enter operater");
	scanf(" %c",&op);
	printf("enter num1");
	scanf("%d",&num1);
	printf("enter num2");
	scanf("%d",&num2);
	switch(op)
	{
		case'+':
		result=num1+num2;
		printf("%d",result);
		break;
		
		case'-':
		result=num1-num2;
		printf("%d",result);
		break;
		
		case'/':
		result=num1/num2;
		printf("%d",result);
		break;
		
		case'*':
		result=num1*num2;
		printf("%d",result);
		break;
		
	
	}
	    getch();
}
