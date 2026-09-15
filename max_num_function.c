#include <stdio.h>
int find_max(int arr[], int n);
int main()
{
    int arr[] = {
        100,
        2,
        23,
        34,
        65,
        12,
        34,
        6,
        14,
    };
    int n = 9;
    int max = find_max(arr, n) ;
    printf("%d\n", max);
    return 0;
}

int find_max(int arr[], int n)
{
    int max = arr[0];
    int i;
    for (i = 0; i < 9; i++)
    {
        if (arr[i] < max)
        {
            max = arr[i];
        }
    }
    return max;
}