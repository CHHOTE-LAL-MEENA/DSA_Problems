#include <iostream>
using namespace std;

int maxEle(int arr[], int sz)
{
    int max = INT16_MIN;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{
    int arr[] = {2, 4, 11, 7, 9};
    int sz = 5;
    cout << maxEle(arr, sz);
    return 0;
}