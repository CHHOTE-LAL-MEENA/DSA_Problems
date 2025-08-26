#include <iostream>
using namespace std;

void RAT(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "please enter the no. of rows: ";
    cin >> n;
    RAT(n);
    return 0;
}