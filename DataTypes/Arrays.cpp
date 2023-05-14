#include <iostream>

using namespace std;
int main()
{

  int n;
  cout << "Enter the size of array: " << endl;
  cin >> n;

  if (n > 0)
  {

    int nums[n];

    for (int i = 0; i < n; i++)
    {
      cin >> nums[i];
    }

    cout << "The entered numbers: " << endl;
    for (int j = 0; j < n; j++)
    {
      cout << j[nums] << "  Memory: " << &nums[j] << endl;
    }
  }
  else
  {
    cout << "Please enter a value greater than 0" << endl;
  }

  return 0;
}