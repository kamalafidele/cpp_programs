#include <iostream>

void insertionSort(int arr[], int arrSize) {
    for (int i = 1; i < arrSize; i++) {
        int key = arr[i];    // Store the current element to be inserted.
        int j = i - 1;       // Start comparing with the previous element.

        // Move elements of the sorted subarray (arr[0..i-1]) that are greater than the key,
        // to one position ahead of their current position.
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place the key (current element) in its correct sorted position.
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = { 12, 4, 1, 14, 20, 3, 7, 17, 20, 30, 25, 78 };
    int arrLen = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < arrLen; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    insertionSort(arr, arrLen);

    std::cout << "Sorted Array: ";
    for (int i = 0; i < arrLen; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}