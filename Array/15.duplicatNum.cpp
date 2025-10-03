#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Not optimal because of TC -> O(n) as well as SC -> O(n) due to unordered_set;
int duplicatNum(vector<int> &arr)
{
    unordered_set<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        if (s.find(arr[i]) != s.end())
            return arr[i];
        s.insert(arr[i]);
    }
    return -1;
}

// Optimal solution using slow-fast pointer approach.
int duplicatNumber(vector<int> &arr)
{
    int slow = arr[0], fast = arr[0];
    do
    {
        slow = arr[slow];      // increase by 1;
        fast = arr[arr[fast]]; // increase by 2;
    } while (slow != fast);

    slow = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main()
{
    vector<int> arr = {3, 1, 1, 2, 4};
    cout << "Duplicate Number is: " << duplicatNum(arr) << endl;
    cout << "Duplicate Number is: " << duplicatNumber(arr) << endl;

    return 0;
}