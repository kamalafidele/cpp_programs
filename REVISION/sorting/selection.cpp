#include <iostream>
#include <string>

using namespace std;

void selectionSort(int* arr, int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        int minimum = i;
        for (int j = i + 1; j < arrLength; j++) {
            if (arr[j] < arr[minimum])
               minimum = j;
        }

        if (minimum != i) {
            int temp = arr[i];
            arr[i] = arr[minimum];
            arr[minimum] = temp;
        }
    }
};

int main () {
    int arr[] = {23, 21, 1, 5, 34, 30, 50, 14, 17, 90, 30, 54, 44, 33, 2 };
    int len = sizeof(arr) / sizeof(int);

    selectionSort(arr, len);

    cout << "------ SORTED ARRAY -----" << endl;
    for (int i = 0; i < len; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}