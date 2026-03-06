#include <stdio.h>

int sumArray(int *ptr, int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);
    }

    return sum;
}

int main()
{
    int arr[10], n, i, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    result = sumArray(arr, n);

    printf("Sum = %d", result);

    return 0;
}