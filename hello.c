#include<stdio.h>
void main()
{
int l,f,c;
printf("Enter No of rows");
scanf("%d",&l);
for(f=1;f<=l;f++)
{
for(c=1;c<=l;c++)
{
if(c<f)
printf("0");
else if(c<=f)
printf("1");
else
printf("2");
}
printf("\n");
}}
