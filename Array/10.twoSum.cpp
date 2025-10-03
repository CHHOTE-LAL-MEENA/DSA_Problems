#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// Broute force -> approach to find the twosum into an array. O(n^2);
pair<int, int> twoSum(vector<int> &arr, int tar)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == tar)
                return {i, j};
        }
    }
    return {-1, -1};
}

// Better approch -> to find the twosum into an array using two pointer approach. O(nlogn);
pair<int, int> twoSum1(vector<int> &arr, int tar)
{
    sort(arr.begin(), arr.end());
    int st = 0, end = arr.size() - 1;
    while (st < end)
    {
        if (arr[st] + arr[end] == tar)
            return {st, end};
        else if (arr[st] + arr[end] < tar)
            st++;
        else
            end--;
    }
    return {-1, -1};
}

// Optimal approach -> to find twosum into an array using hashing techniques. O(n)
pair<int, int> twoSum2(vector<int> arr, int tar)
{
    unordered_map<int, int> m;
    for (int i = 0; i < arr.size(); i++)
    {
        int first = arr[i];
        int sec = tar - first;
        if (m.find(sec) != m.end())
        {
            return {m[sec], i};
        }
        m[first] = i;
    }
    return {-1, -1};
}

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int target = 22;
    pair<int, int> res = twoSum(arr, target);
    cout << "[" << res.first << "," << res.second << "]" << endl;

    pair<int, int> res1 = twoSum1(arr, target);
    cout << "[" << res1.first << "," << res1.second << "]" << endl;

    pair<int, int> res2 = twoSum2(arr, target);
    cout << "[" << res2.first << "," << res2.second << "]" << endl;

    return 0;
}