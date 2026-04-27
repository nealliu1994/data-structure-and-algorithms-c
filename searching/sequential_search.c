// Sequential Search

// Standard input/output function
# include <stdio.h>

// A[]: array
// n: array length(size)
// v: search value
int sequentialSearch(int A[], int n, int v){
    int i = 0;
    
    while (i < n && A[i] != v){
        i = i + 1;
    }
    
    if (i < n) {
        return i;
    } else {
        return -1;
    }
}

int main(void){
    int arr[] = {3, 7, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target =10;

    int result = sequentialSearch(arr, n, target);

    if (result != -1){
        printf("Found %d index %d\n", target, result);
    } else {
        printf("%d not found\n", target);
    }

    return 0;  // Program ran successfully
}

