#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define n 12
int bullle_sort(int arr[])
{
    int i, j, key;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                key = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = key;
            }
        }
    }
    printArray(arr);
}
int printArray(int arr[])
{
    int i;
     for (i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
}
void selection_sort(int arr[])
{
    int i, j, key;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                key = arr[i];
                arr[i] = arr[j];
                arr[j] = key;
            }
        }
    }
    printArray(arr);
}
int main()
{
    int arr[120], i;
    for (i = 0; i < 5; i++)
    {
        arr[i] = (rand() % 100);
    }
    printArray(arr);
    printf("\n");
    // selection_sort(arr);
    bullle_sort(arr);
}