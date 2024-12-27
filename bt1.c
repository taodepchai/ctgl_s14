#include<stdio.h>

int search(int arr[], int searchValue, int n){
    for (int i=0; i<n; i++){
        if (arr[i] == searchValue){
            return i;
        }
    }
    return -1;
}

int main() {
    int a[] = {2,4,1,5,1,5};
    int n = sizeof(a)/sizeof(a[0]);
    int searchValue = 5;
    int result = search(a, searchValue, n);
    if (result == -1){
        printf("khong tim thay");
    } else {
        printf("tim thay o vi tri %d", result);
    }
}