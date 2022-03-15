#include<stdio.h>
#include<conio.h>
int search_array()
{
    int i,n,a[120],key,value;

    printf("\n Enter N :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\n A[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\n Enter search index key :");
    scanf("%d",&key);

    printf("\n A[%d] : %d",key,a[key]);

    return 0;

}
int main()
{
    search_array();   
}