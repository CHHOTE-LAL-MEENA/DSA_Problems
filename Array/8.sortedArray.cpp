#include <iostream>
using namespace std;

// non decreasing order

int isSorted(int arr[], int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 9};
    int sz = 7;
    cout << isSorted(arr, sz);
    return 0;
}