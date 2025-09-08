#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int maxAllowedPages)
{
    int students = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedPages)
            return false;
        if (pages + arr[i] <= maxAllowedPages)
            pages += arr[i];
        else
        {
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false : true;
}

int allocateBook(vector<int> arr, int n, int m)
{
    if (m > n)
        return -1;

    int sum = 0, ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    int st = 0, end = sum;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 3, 4};
    vector<int> arr1 = {15,17,20};
    int n = 4, m = 2;
    cout<<"Answer is: "<<allocateBook(arr, n, m)<<endl;
    cout<<"Answer is: "<<allocateBook(arr1, 3, m)<<endl;
    return 0;
}