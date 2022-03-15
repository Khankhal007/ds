#include<stdio.h>
#include<conio.h>
int last_insert()
{
    printf("\n\n --------------------last insert -----------------------\n\n");
    int i,n=5,a[120];
    for(i=0;i<n;i++)
    {
        printf("\nA[%d] : ",i);
        scanf("%d",&a[i]);
    }
    a[n]=1000;
    for(i=0;i<n+1;i++)
    {
        printf("\nA[%d] : %d",i,a[i]);
    }
}
int main()
{
    last_insert();
}