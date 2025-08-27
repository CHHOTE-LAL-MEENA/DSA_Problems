#include <iostream>
using namespace std;

void hollowRhombus(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2 * n; j++)
        {
            if (j == n - i - 1 || j == 2 * n - i - 1 || (i == 0 && j > n - i - 1) || (i == n - 1 && j < 2 * n - i - 1))
            {
                cout << "*";
            }
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
    hollowRhombus(n);
    return 0;
}