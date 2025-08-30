#include <iostream>
using namespace std;

void hollowSqaure(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
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
    hollowSqaure(n);
    return 0;
}