#include <iostream>
using namespace std;

void InvLeftAlignRAT(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            if (j > n - i)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "please enter the no. of rows: ";
    cin >> n;
    InvLeftAlignRAT(n);
    return 0;
}