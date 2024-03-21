#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num,oddsum=0,evensum=0;
	printf("enter the value num");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		evensum=evensum+i;
		else
		oddsum=oddsum+i;
		printf("sum of odd number=%d",oddsum);
		printf("sum of even number=%d",evensum);
	}
	return 0;
	
}