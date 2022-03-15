#include<stdio.h>
#include<conio.h>
int fisrt_delet()
{
     printf("\n\n --------------------fisrt delet -----------------------\n\n");
      int i,n=5,a[120];
    for(i=0;i<n;i++)
    {
        printf("\nA[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("\nA[%d] : %d",i,a[i]);
    }
}
int main()
{
    fisrt_delet();
}