#include<stdio.h>
void main()
{
    int n,i,a,b,c,d,j;
    for(i=1000;i<=9999;i++)
    {
        j=i;
        a=j%10;
        j=j/10;
        b=j%10;
         j=j/10;
        c=j%10;
         j=j/10;
        d=j%10;
         j=j/10;
        if(a==b&&c==d)
            {
            j=i;
            a=sqrt(i);
           if(a*a==i)
               {
                  printf("%d ",i);
               }
    }
}
}


