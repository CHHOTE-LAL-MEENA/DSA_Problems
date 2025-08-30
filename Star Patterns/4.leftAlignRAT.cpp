#include <iostream>
using namespace std;

void leftAlignRAT(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            (j <= n - i) ? cout << " " : cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "please enter the no. of rows: ";
    cin >> n;
    leftAlignRAT(n);
    return 0;
}