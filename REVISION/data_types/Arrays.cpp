#include <iostream>

using namespace std;

int main() {
    int nums[] = {12, 34, 56, 67, 12, 102};
    int len = sizeof(nums) / sizeof(int);
    // for (int i = 0; i < len; i++) 
    //    cout << nums[i] << endl;

    int n;
    cout << "Enter the size of array: ";
    cin>>n;
    int dynamic_arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter data for index " << i << ":";
        cin>>dynamic_arr[i];
    }

    cout << "Data from the array you created" <<endl;
    for (int i = 0; i < n; i++) {
        cout << dynamic_arr[i] <<endl;
    }

    return 0;
}