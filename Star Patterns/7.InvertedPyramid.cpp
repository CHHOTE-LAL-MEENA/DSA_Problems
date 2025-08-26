#include <iostream>
using namespace std;

void InvertedPyramid(int n)
{
    int i, j;
    for (i = n-1; i >=0; i--)
    {
        for (j = 0; j < (2 * n - 1); j++)
        {
            if (n - i - 1 > j || j > n + i - 1)
            {
                cout << " ";
            }
            else
                cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Please enter the no. of rows: ";
    cin >> n;
    InvertedPyramid(n);
    return 0;
}