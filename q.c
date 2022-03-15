#include<stdio.h>
int fun(int v)
{
    if(v==1 || v==0)
    {
        return 1;
    printf("%d",v);
    }
    else if(v%2==0)
    {
        return fun(v/2)+2;
    printf("%d",fun);
    }
    else
        return fun(v-1)+3;
}
int main()
{
    printf("%d",fun(7));
}