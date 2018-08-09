#include<stdio.h>
void main()
{
	int a[5],i,j;
	printf("Enter elements of array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>a[i+1])
		   j=a[i];
        else
            continue;
	}
	printf("\n%d",j);
}
