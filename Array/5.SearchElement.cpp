#include <iostream>
using namespace std;

int SearchEle(int arr[], int st, int end, int ele)  // log N time complexity
{
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == ele)
            return mid;
        if (arr[mid] >= arr[0])
        {
            if (arr[st] <= ele && arr[mid] > ele)
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (ele >= arr[mid] && ele < arr[end])
            {
                st = mid + 1;
            }
            else
                end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 10, 1, 2};
    int ele = 4, sz = 6, k = 4;
    cout << "Element found at index: " << SearchEle(arr, 0, sz - 1, ele);

    return 0;
}