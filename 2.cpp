#include <stdio.h>
#include<conio.h>
int main()
{
	int num,sum=0,remainder,count;
	printf("enter a number");
	scanf("%d",&num);
	while(num)
	{
		remainder=num%10;
		sum=sum+(remainder+1);
		num/=10;
	}
	printf("increasing 1 to all digit %d",sum);
	return 0;
}
