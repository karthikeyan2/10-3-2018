#include<stdio.h>
#include <conio.h>
void main(void)

{
int i,a[100],min;
for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
	min=a[0];
}
for(i=0;i<10;i++)
{
	if(a[i]<min)
	min=a[i];
}
printf("%d",min);
	return 0;
}
