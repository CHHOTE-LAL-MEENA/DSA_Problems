#include <iostream>
using namespace std;

// Using brute force Time complexity is O(n)
int power(int x, int n)
{
    int ans = 1;
    for (int i = 0; i < n; i++)
        ans *= x;
    return ans;
}

// Optimal solution time coplexity O(log n)

double power1(double x, int n)
{
    double ans = 1.0;
    if (n == 0)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == 1)
        return 1.0;
    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;

    if (n < 0)
    {
        x = 1 / x;
        n = -n;
    }
    while (n > 0)
    {
        if (n % 2 == 1)
            ans *= x;
        x *= x;
        n /= 2;
    }
    return ans;
}

int main()
{
    cout << "Brute force approch: " << power(2, 3) << endl;
    cout << "Optimized solution: " << power1(2, -3) << endl;
    return 0;
}