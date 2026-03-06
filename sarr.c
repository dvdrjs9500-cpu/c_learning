#include <stdio.h>
int main()
{
    int arr[10], i, sum = 0;

    printf("Enter 10 numbers:\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}