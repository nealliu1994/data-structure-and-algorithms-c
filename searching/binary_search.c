// Binary Search

#include <stdio.h>

int binarySearch(int A[], int n, int v){
    int l = 0, u =n-1;
    
    while (l <= u){
        int m = (l + u) / 2;

        if (A[m] == v){
            return m;
        }else if (v < A[m]){
            u = m - 1;
        }else{
            l = m + 1;
        }
    }
    
    return -1;
}

int main(void){
    int arr[] = {9, 11,16,19.23, 39, 45, 51, 81, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 16;
    
    int result = binarySearch(arr, n, target);

    if(result != -1){
        printf("Found %d at index %d\n", target, result);
    }else{
        printf("%d not found\n", target);
    }
    
    return 0;
}
