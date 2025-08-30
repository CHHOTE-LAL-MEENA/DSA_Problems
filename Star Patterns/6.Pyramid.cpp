#include <iostream>
using namespace std;

void Pyramid(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
            cout << " ";
        for (j = 0; j < 2 * i + 1; j++)
            cout << "*";
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