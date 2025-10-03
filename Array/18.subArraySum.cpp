#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Broute force approach to find the sum of subarray;

int subArrSum(vector<int> nums, int tar)
{
    int n = nums.size(), count = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            if (sum == tar)
                count++;
        }
    }
    return count;
}

// Optimal solution for the subarray sum
int subArrSumOpt(vector<int> &arr, int k)
{
    int n = arr.size(), count = 0;
    vector<int> prifixSum(n, 0);
    prifixSum[0] = arr[0];
    unordered_map<int, int> m; // PS, Freq

    for (int i = 1; i < n; i++)
    {
        prifixSum[i] = prifixSum[i - 1] + arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (prifixSum[j] == k)
            count++;
        int val = prifixSum[j] - k;
        if (m.find(val) != m.end())
        {
            count += m[val];
        }
        if (m.find(prifixSum[j]) == m.end())
        {
            m[prifixSum[j]] = 0;
        }
        m[prifixSum[j]]++;
    }
    return count;
}

int main()
{
    vector<int> nums = {9, 4, 20, 3, 10, 5};
    int tar = 33;
    cout << subArrSumOpt(nums, tar) << endl;
    cout << subArrSum(nums, tar) << endl;

    return 0;
}