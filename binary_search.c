#include<stdio.h>
int main (){
    int arr[] = {1,3,34,36,67,70,79,88,91,100};
    int low_value =0;
    int high_value = 10;
    int mid_value;
    int num = 79;
    while(low_value<=high_value){
        mid_value = (low_value+high_value)/2;
        if (num == mid_value){
            break;
        }
        else if (num < arr[mid_value]){
            high_value = mid_value -1;

        }
        else{
            low_value =mid_value+1;
        }
    }
}