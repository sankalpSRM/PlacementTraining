#include <stdio.h>
int main() {
    int arr[] = {4,6,7,7,8987,5,6,89,8643};
    //finding len of array
    int size = sizeof(arr)/sizeof(arr[0]);
    //reversing
    for ( int i = 0, j = size -1; i<j; i++, j--)
        arr[i] = arr[i]+arr[j] - (arr[j]=arr[i]);
    //printing array
    for (int i = 0 ; i<size;i++)
        printf("%d ", arr[i]);
    return 0;
}
