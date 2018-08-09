#include<stdio.h>
void main()
{
    int n,i,a,b,c,d,j;
    for(i=1000;i<=9999;i++)
    {
        a=i%10;
        b=i%100;
        c=i%1000;
        d=i%10000;
        if(a==b&&c==d)
            printf("%d\n",i);
    }
}

