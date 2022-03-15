#include<stdio.h>
#include<conio.h>
int search_value()
{
    int i,n,a[120],key,value;

    printf("\n Enter N :");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        printf("\n A[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\n Enter search value No. :");
    scanf("%d",&value);

    for(i=0;i<=n;i++)
    {
        if(a[i]==value)
        {
            printf("\nA[%d] : %d ",i,a[i]);
        }
    }
}
int main()
{
    search_value();
}