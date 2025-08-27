#include <iostream>
using namespace std;

void RhombusPattern(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2 * n; j++)
        {
            if (j < n - i - 1 || j > 2 * n - i - 1)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;
    RhombusPattern(n);
    return 0;
}