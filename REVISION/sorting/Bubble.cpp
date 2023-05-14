#include <iostream>
#include <string>

using namespace std;

void bubbleSort(int* arr, int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        for (int j = 0; j < arrLength; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
};

int main () {
    int arr[] = {23, 21, 1, 5, 34, 30, 50, 14, 17, 90, 30, 54, 44, 33, 2 };
    int len = sizeof(arr) / sizeof(int);

    bubbleSort(arr, len);

    cout << "------ SORTED ARRAY -----" << endl;
    for (int i = 0; i < len; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}