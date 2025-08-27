#include <iostream>
using namespace std;

void pascalTri(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2 * n - 1; j++)
        {
            if (j < n - i - 1 || j > n + i - 1 || (i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
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
    pascalTri(n);
    return 0;
}

/*

                                            *
                                           * *
                                          * * *
                                         * * * *

*/
