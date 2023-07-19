#include <iostream>

using namespace std;

int binarySerach(int *arr, int high, int low, int key)
{
    while (high >= low)
    {
        cout << "iteration" << endl;
        int mid = (high + low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            high = mid - 1;
        else if (arr[mid] < key)
            low = mid + 1;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 7, 12, 14, 17, 20, 20, 25, 30, 78};
    int arrSize = sizeof(arr) / sizeof(int);
    int key = 1;
    int targetIndex = binarySerach(arr, arrSize -1 , 0, key);

    if (targetIndex < 0)
    {
        cout << "Eelement " << key << " was not found in the array" << endl;
        return 0;
    }
    cout << "Element " << key << " was found on index: " << targetIndex << endl;
    return 0;
}