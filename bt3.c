#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; 
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else { 
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n, i, target, result;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, n);

    printf("Mang sau khi sap xep:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap phan tu can tim: ");
    scanf("%d", &target);
    result = binarySearch(arr, n, target);
    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", target, result);
    } else {
        printf("Phan tu %d khong tim thay trong mang.\n", target);
    }

    return 0;
}