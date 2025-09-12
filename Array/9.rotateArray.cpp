#include <iostream>
using namespace std;

int rotateArr(int arr[], int sz, int k)
{
    int temp[sz];
    for (int i = 0; i < sz; i++)
    {
        int pos = (i + k) % sz;
        temp[pos] = arr[i];
    }
    for (int i = 0; i < sz; i++)
    {
        cout << temp[i] << " ";
    }
}

// optimized approach

void reverse(int arr[], int st, int end)
{
    while (st < end)
    {
        swap(arr[st++], arr[end--]);
    }
}

void RotateArr(int arr[], int st, int end, int k)
{
    reverse(arr, 0, end);
    reverse(arr, 0, k - 1);
    reverse(arr, k, end);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sz = 5, k = 2;
    
    // rotateArr(arr, sz, k);
    RotateArr(arr, 0, sz - 1, k);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}