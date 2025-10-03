#include <iostream>
using namespace std;

// Broute force approach to find the GCD/HCF.
void GCD(int a, int b)
{
    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    cout << "GCD/HCF is: " << gcd << endl;
}

// To find the GCD using Euclid's Algorithm
int gcdEuclid(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}

// GCD using Recursion approach
int gcdRec(int a, int b)
{
    if (b == 0)
        return a;
    return gcdRec(b, a % b);
}

int main()
{
    int a = 20, b = 28;
    cout << "GCD/HCF is: " << gcdEuclid(a, b) << endl;
    cout << "GCD/HCF is: " << gcdRec(6, 18) << endl;
    GCD(3, 27);
    return 0;
}