#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n );
    char* list[n];
    for(i=0;i<n;i++)
    {
        list[i]=(char*)malloc(n);
    }
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        gets(list[i]);
    }
    for(i=0;i<n;i++)
    {
        puts(list[i]);
    }
    printf("Enter address to delete");
    scanf("%d",&k);
    list[k]=list[k-1];
    list[k-1]=NULL;
    for(i=0;i<n;i++)
    {
        puts(list[i]);
    }
}
