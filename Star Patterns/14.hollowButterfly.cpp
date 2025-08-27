#include <iostream>
using namespace std;

void hollowButterfly(int n)
{
    int i, j;
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < (2 * n - 1); j++)
        {
            if (j == 0 || j == n - i - 1 || j == n + i - 1 || j == 2 * n - 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (2 * n - 1); j++)
        {
            if (j == 0 || j == n - i - 1 || j == n + i - 1 || j == 2 * n - 2)
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
    hollowButterfly(n);
    return 0;
}