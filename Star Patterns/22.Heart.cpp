#include <iostream>
using namespace std;

void starPattern(int n)
{
    for (int i = n/2; i <= n; i += 2) {
        // print spaces before left side
        for (int j = 1; j < n - i; j += 2) {
            cout << " ";
        }

        // print left side stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // print spaces between two sides
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // print right side stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << "\n";
    }

    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            if (j<n-i-1||j>n+i-1)
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
    cout << "enter no. of rows: " << endl;
    cin >> n;
    starPattern(n);
    return 0;
}