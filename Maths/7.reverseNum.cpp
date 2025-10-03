#include <iostream>
using namespace std;

void reverseNum(int n)
{
    int revNum = 0;
    while (n != 0)
    {
        int dig = n % 10;
        if (revNum > INT16_MAX / 10 || revNum < INT16_MIN / 10)
            return;
        revNum = (revNum * 10) + dig;
        n /= 10;
    }
    cout << "Reverse of given number is: " << revNum << endl;
}

int main()
{
    int n = 3786;
    reverseNum(n);
    return 0;
}