#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int> &A)
{
    int pivot = -1, n = A.size();
    // step:1 find the pivot element

    for (int i = n - 2; i >= 0; i--)
    {
        if (A[i] < A[i + 1])
        {
            pivot = i;
            break;
        }
    }

    if(pivot==-1){
      reverse(A.begin(),A.end());
      return;
    }
    // step:2 next grater most element
    for (int i = n - 1; i >= 0; i--)
    {
        if (A[i] > A[pivot])
        {
            swap(A[i], A[pivot]);
            break;
        }
    }
    // step:3 reverse pivot+1 to n-1 element
    int i = pivot + 1, j = n - 1;
    while (i <= j)
    {
        swap(A[i++], A[j--]);
    }
}

void display(vector<int> &A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> A = {1, 2, 5, 4, 3};
    nextPermutation(A);
    display(A);

    return 0;
}