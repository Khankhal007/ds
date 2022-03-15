#include<stdio.h>
#include<conio.h>
int first_insert()
{
    printf("\n\n --------------------first insert -----------------------\n\n");
    int i,n=5,a[120];
    for(i=0;i<n;i++)
    {
        printf("\nA[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for (i=n;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=1000;
    for(i=0;i<n+1;i++)
    {
        printf("\nA[%d] : %d",i,a[i]);
    }
}
int main()
{
    first_insert();
}