#include <iostream>
using namespace std;

void concentricSquare(int n)
{
    int i, j, size = 2 * n - 1;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            int layer = min(min(i, j), min(size - i - 1, size - j - 1));
            if (layer % 2 == 0)
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
    cout << "Enter the no. of rows: ";
    cin >> n;
    concentricSquare(n);
    return 0;
}