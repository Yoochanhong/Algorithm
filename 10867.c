#include <stdio.h>

void swap(int arr[], int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int partition(int arr[], int left, int right) {
    int pivot = arr[left], low = left + 1, high = right, temp;
    while (low <= high) {
        while (low <= right && pivot >= arr[low]) low++;
        while (high >= (left + 1) && pivot <= arr[high]) high--;
        if (low <= high) swap(arr, low, high);
    }
    swap(arr, left, high);
    return high;
}

void quickSort(int arr[], int left, int right) {
    if (left <= right) {
        int pivot = partition(arr, left, right);
        quickSort(arr, left, pivot - 1);
        quickSort(arr, pivot + 1, right);
    }
}

int main() {

    int n, arr[100000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);
    int arr1[n];
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[i + 1]) {
            arr1[c++] = arr[i];
        }
    }
    for (int i = 0; i < c; i++) {
        printf("%d ", arr1[i]);
    }
    return 0;
}