#include <iostream>
#include <math.h>
using namespace std;

int printDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        int digit = n % 10;
        count++;
        n /= 10;
    }
    return count;
}

int main()
{
    int n = 35689;
    // cout<<(int)(log10(n)+1)<<endl;
    cout << printDigits(n);
    return 0;
}