#include<stdio.h>

void main()

{

int num,i,j,k,m,c;

printf("Enter a No. between 1-9\n");

scanf("%d",&num);



if(num>0&&num<=9)
{
	puts("    C O N G R A T U L A T I O N S\n\n");


for(i=num,m=num;i>1;i--)
{
	for(k=num;k>i-1;k--)
	{
		printf("%d ",k);
	}
	for(j=1;j<i*2-2;j++)
	{
		printf("%d ",i);
	}
	for(c=i;c<=num;c++)
	{
		if(i==1&&c<=num)
		{
		printf("%d ",c+1);
		}
		else
		printf("%d ",c);
	}
	printf("\n");
}
for(i=1,m=num;i<=num;i++)
{
	for(j=num;j>i-1;j--)
	{
		printf("%d ",j);
	}
	for(k=i-1;k>1;k--)
	{
		printf("%d ",i);
	}
	for(k=1;k<i;k++)
	{
		printf("%d ",i);
	}
	if(i==1)
	{
		m=m-1;
	}
	else m=num;
	for(j=i;j<=m;j++)
	{
		if(i==1&&j<num)
		{
		printf("%d ",j+1);
		}
		else printf("%d ",j);
	}
	printf("\n");
}
}
else
	printf("Please input a number between 1-9");
}
