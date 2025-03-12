#include <iostream>

using namespace std;

int reverseArray(int arr[], int size)
{

  int start = 0;
  int end = size - 1;

  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  return 0;
}

int main()
{
  int size = 5;

  int arr[size] = {1, 2, 3, 4, 5};

  reverseArray(arr, size);

  for (int i = 0; i < size; i++)
  {
    if (i != 0)
    {
      cout << " | ";
    }
    cout << arr[i];
  }
}