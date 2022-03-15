#include <stdio.h>
#include <conio.h>
int a[120], n, i, key, value, ch;
int display()
{
    for (i = 0; i < n + 1; i++)
    {
        printf("\nA[%d] : %d", i, a[i]);
    }
}
int first_insert()
{
    printf("\n\n --------------------first insert -----------------------\n\n");
    for (i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = 1000;
    // for (i = 0; i < n + 1; i++)
    // {
    //     printf("\nA[%d] : %d", i, a[i]);
    // }
}
int last_insert()
{

    printf("\n\n --------------------last insert -----------------------\n\n");
    a[n] = 1000;
    for (i = 0; i < n + 1; i++)
    {
        printf("\nA[%d] : %d", i, a[i]);
    }
}
int fisrt_delet()
{
    printf("\n\n --------------------fisrt delet -----------------------\n\n");
    for (i = 0; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    // for (i = 0; i < n - 1; i++)
    // {
    //     printf("\nA[%d] : %d", i, a[i]);
    // }
}
int lest_delet()
{
    printf("\n\n --------------------last delet -----------------------\n\n");
    for (i = 0; i < n; i++)
    {
        a[i + 1] = a[i];
    }
    // for (i = 0; i < n + 1; i++)
    // {
    //     printf("\nA[%d] : %d", i, a[i]);
    // }
}
int search_array()
{
    printf("\n\n -------------------- search array -----------------------\n\n");
    printf("\n Enter search index key :");
    scanf("%d", &key);

    printf("\n A[%d] : %d", key, a[key]);
}
int search_value()
{
    printf("\n\n -------------------- search value -----------------------\n\n");
    printf("\n Enter search value No. :");
    scanf("%d", &value);

    for (i = 0; i <= n; i++)
    {
        if (a[i] == value)
        {
            printf("\nA[%d] : %d ", i, a[i]);
        }
    }
}
int user_insert()
{
    printf("Enter insert array:");
    scanf("%d", &key);
    printf("ENTER VALUE : ");
    scanf("%d", &value);
    for (i = n; i >= key; i--)
    {
        a[i] = a[i - 1];
    }
    a[key] = value;
    // for (i = 0; i < n + 1; i++)
    // {
    //     printf("\n[%d]\t%d", i, a[i]);
    // }
}
int user_delet()
{
    printf("Enter delete array:");
    scanf("%d", &key);
    for (i = key; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    for (i = 0; i < n - 1; i++)
    {
        printf("\n[%d]\t%d", i, a[i]);
    }
}
int main()
{
    printf("Enter Value for Array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter value [%d]",i);
        scanf("%d",&a[i]);
    }
 do{
        printf("\nSelect: 0).display\n\t1).First_insert \n\t2).last_insert \n\t3).fisrt_delet \n\t4).lest_delet \n\t5).search_array \n\t6).search_value \n\t7).uesr_insert \n\t8).user_delet \n\t9).Exit\t\t::--");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
        display();
            break;
        case 1:
        first_insert();
            break;
        case 2:
            last_insert();
            break;
        case 3:
            fisrt_delet();
            break;
        case 4:
            lest_delet();
            break;
        case 5:
            search_array();
            break;
        case 6:
            search_value();
            break;
        case 7:
            user_insert();
            break;
        case 8:
            user_delet();
        default:
            printf("good byy");  
            break;
        }
    }while(ch!=9);
}