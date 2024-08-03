#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// prototype

int peakIndexInMountainArray(int *arr, int arrSize);

int peakIndexInMountainArray(int* arr, int arrSize) {
    int r = arrSize - 1;
    int l = 0;
    int m = 0;

    while (l < r) {
        m = (int)floor((r + l) / 2);

        if (arr[m] > arr[m + 1] && arr[m] > arr[m - 1]) {
            return m;
        }

        else if (arr[m] > arr[m + 1]) {
            r = m - 1;
        }

        else {
            l = m + 1;
        }
    }
    return l;
}


int main() {
    int arr1[3] = {0,1,0};
    int result;

    result = peakIndexInMountainArray(arr1, 4);
    printf("Peak Index in Mountain Array: %d\n", result);

    return 0;
}