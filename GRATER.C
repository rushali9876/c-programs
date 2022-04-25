#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n Enter The 3 Numbers");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
	{
		printf("%d is grater",a);
	}
	else
	{
		if(b>a && b>c)
		{
		printf("%d is grater",b);
		}
		else
		{
		printf("%d is grater",c);
		}
	}
	getch();
}