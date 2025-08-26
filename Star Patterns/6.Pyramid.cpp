#include <iostream>
using namespace std;

void Pyramid(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
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
    Pyramid(n);
    return 0;
}