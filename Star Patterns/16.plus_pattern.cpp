#include <iostream>
using namespace std;

void plusPattern(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == (n / 2)  || j == (n / 2 ))
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
    cout << "Enter the odd no. of rows: ";
    cin >> n;
    plusPattern(n);
    return 0;
}