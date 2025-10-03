#include <iostream>
#include <vector>
using namespace std;

void mergeTwoSortedArr(vector<int> &A, int m, vector<int> &B, int n)
{
    int idx = m + n - 1, i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (A[i] >= B[j])
        {
            A[idx--] = A[i--];
        }
        else
        {
            A[idx--] = B[j--];
        }
    }
    while (j >= 0)
    {
        A[idx--] = B[j--];
    }
}

void display(vector<int> &A)
{
    int sz = A.size();
    for (int i = 0; i < sz; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> A = {1, 2, 3, 0, 0, 0};
    vector<int> B = {2, 5, 6};
    int m = 3, n = 3;
    mergeTwoSortedArr(A, m, B, n);
    display(A);
    return 0;
}