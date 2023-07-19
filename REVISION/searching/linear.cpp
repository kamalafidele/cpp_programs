#include <iostream>

using namespace std;

int linearSerach(int* arr, int arrSize, int key) {
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

int main() {
    int arr[] = { 23, 21, 1, 5, 34, 30, 50, 14, 17, 90, 30, 54, 44, 33, 2 };
    int arrSize = sizeof(arr) / sizeof(int);
    int key = 15;
    int targetIndex = linearSerach(arr, arrSize, key);

    if (targetIndex < 0) {
        cout << "Eelement " << key << " was not found in the array"<< endl;
        return 0;
    }
    cout << "Element " << key << " was found on index: " << targetIndex << endl;
    return 0;
}