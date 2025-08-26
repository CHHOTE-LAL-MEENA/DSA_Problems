#include <iostream>
using namespace std;

void hollowPyramid(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (2 * n - 1); j++)
        {
            if (j == n - i - 1 || j == n + i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for (i = n - 2; i >= 0; i--)
    {
        for (j = 0; j < (2 * n - 1); j++)
        {
            if (j == n - i - 1 || j == n + i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;
    hollowPyramid(n);
    return 0;
}