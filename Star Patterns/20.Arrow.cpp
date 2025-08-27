#include <iostream>
using namespace std;

void Arrow(int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = n - 1; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
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
    Arrow(n);
    return 0;
}