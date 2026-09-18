#include <stdio.h>
int find_min(int arr[], int n);
int main()
{
    int arr[] = {12, 47, 45, 65, 755, 234, 23, 123, 12, 34, 5, 45, 4545, 32323, 3434};
    int n=15;
    int min = find_min(arr,n);
    printf("%d\n",min);
}
int find_min(int arr[],int n){
    int min = arr[0];
    int i;
    for (i=0;i<15;i++){
        if(arr[i] >min){
            min = arr[i];
        }
    }
    return min;
}