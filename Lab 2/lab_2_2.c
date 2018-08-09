#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],*p;
    p=a;
    gets(a);
    int t;
    t=strleng(p);
    printf("%d",t);
}
int strleng(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++);
    {
        printf("Length is: ");
    }
    return i;
}

