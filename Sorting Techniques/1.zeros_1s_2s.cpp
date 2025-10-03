#include <iostream>
#include <vector>
using namespace std;

// Brout force approach to sort an array or bubble sort technique. O(n^2)
void Sort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        int flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {  
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                flag = true;
            }
        }
        if (!flag)
            return;
    }
}

// OPtimized approach  O(n) but 2 passes
void optiSort(vector<int> &nums)
{
    int n = nums.size();
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
            count0++;
        else if (nums[i] == 1)
            count1++;
        else
            count2++;
    }
    int idx = 0;
    for (int i = 0; i < count0; i++)
    {
        nums[idx++] = 0;
    }
    for (int i = 0; i < count1; i++)
    {
        nums[idx++] = 1;
    }
    for (int i = 0; i < count2; i++)
    {
        nums[idx++] = 2;
    }
}

// OPtimal approach  O(n) in 1 pass or Dutch National Flag algorithm.
void DNF(vector<int> &nums)
{
    int n = nums.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0) // 0 to low-1 all the zeros
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1) // low to mid-1 all the 1s
            mid++;
        else
        {
            swap(nums[mid], nums[high]); // high+1 to n-1 all the 2s
            high--;
        }
    }
}

void display(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    // Sort(nums);
    // optiSort(nums);
    DNF(nums);
    display(nums);
    return 0;
}