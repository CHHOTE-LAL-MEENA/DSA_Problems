#include <iostream>
using namespace std;

void LCM(int a, int b)
{
    int gcd = 1, product = a * b;
    while (a > 0 && b > 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    if (a == 0)
        gcd = b;
    else
        gcd = a;

    cout << "GCD is: " << gcd << endl;
    cout << "LCM is: " << product / gcd << endl;
}

int main()
{
    LCM(20, 28);
    return 0;
}