#include<stdio.h>

int binarySearch(int a[], int left, int right, int searchValue){
    if (left < right){
        return -1;
    }
    int mid = (left+ right) / 2;
    if (a[mid] == searchValue){
        return mid;
    }
    else if (a[mid] > searchValue){
        return binarySearch(a, left, mid - 1, searchValue);
    } else {
        return binarySearch(a, mid + 1, right, searchValue);
    }  
}

int main() {
    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a) / sizeof(a[0]);
    int searchValue = 5;
    int left = 0;
    int right = n - 1;
    int result = binarySearch(a, left, right, searchValue);
    if (result != -1) {
        printf("phan tu duoc tim thay o vi tri %d\n", result);
    } else {
        printf("phan tu khong tim thay");
    }
}