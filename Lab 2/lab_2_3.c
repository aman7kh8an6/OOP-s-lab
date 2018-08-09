#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,*p;
    p=a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    maxmin(p,n);
    return 0;
}
int maxmin(int *q,int m)
{
    int i,max,min;
    max=*q;
    min=*q;
    for(i=1;i<m;i++)
    {
        if(*(q+i)>max)
            max=*(q+i);
        if(*(q+i)<min)
            min=*(q+i);
    }
    printf("Max value is %d: ",max);
    printf("Min value is %d: ",min);
}
