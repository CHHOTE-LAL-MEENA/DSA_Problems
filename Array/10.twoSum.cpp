#include <iostream>
using namespace std;

int *twoSum(int arr[], int st, int end, int target)
{
    int *idx = new int[2];
    while (st < end)
    {
        if (arr[st] + arr[end] == target)
        {
            idx[0] = st;
            idx[1] = end;
            return idx;
        }
        if (arr[st] + arr[end] < target)
            st++;
        else
            end--;
    }
    idx[0] = -1;
    idx[1] = -1;
    return idx;
}

int main()
{
    int arr[] = {2, 7, 11, 15};
    int sz = 4, target = 13;
    int *ans = twoSum(arr, 0, sz - 1, target);
    cout << "[" << ans[0] << "," << ans[1] << "]";
    return 0;
}