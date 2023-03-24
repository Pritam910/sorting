#include <stdio.h>
#include "bubbleSort.h"

int main() {
    int size1,k;
    printf("Enter the size of the array: ");
    scanf("%d",&size1);
    int arr[size1];
    printf("Enter the elements of the array: ");
    for(int k=0;k<size1;k++)
        scanf("%d",&arr[k]);

    int size=sizeof(arr)/sizeof(int);
    printf("%d / %d = %d\n",sizeof(arr),sizeof(int),size);

    bubbleSort(arr, size);

    for(int j=0;j<size;j++){
        printf(" %d ", arr[j] );
    }

    return 0;
}

