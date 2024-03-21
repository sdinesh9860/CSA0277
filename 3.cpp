#include <stdio.h>
#include<conio.h>
int main()
{
	int num,originalnum,remainder,result=0;
	printf("enter a three-digit integer");
	scanf("%d",&num);
	originalnum=num;
	while(originalnum!=0)
	{
		remainder=originalnum%10;
		result+=remainder*remainder*remainder;
		originalnum/=10;
	}
	if(result==num)
	printf("%d is armstrong number",num);
	else
	printf("%d is not a armstrong number",num);
	return 0;
}

