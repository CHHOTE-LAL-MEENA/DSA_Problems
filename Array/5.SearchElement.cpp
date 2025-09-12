#include <iostream>
using namespace std;

void reverse(int arr[], int st, int end)
{
    while (st < end)
    {
        swap(arr[st++], arr[end--]);
    }
}

int searchEle(int arr[], int st, int end, int k, int ele)
{
    reverse(arr, k, end);
    reverse(arr, 0, k - 1);
    reverse(arr, 0, end);

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == ele)
            return mid;
        if (arr[mid] < ele)
            st = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 10, 1, 2};
    int ele = 10, sz = 6, k = 4;
    cout << "Element found at index: " << searchEle(arr, 0, sz - 1, k, ele) << endl;
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    // cout<<searchEle(arr,1);
    return 0;
}