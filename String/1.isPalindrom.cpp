#include <iostream>
#include <string>
using namespace std;

bool isAlphaNum(char ch)
{
    if ((ch >= 0 && ch <= 9) || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
        return true;
    return false;
}

int isPalindrom(string s)
{
    int st = 0, end = s.length() - 1;
    while (st < end)
    {
        if (!isAlphaNum(s[st]))
        {
            st++;
            continue;
        }
        if (!isAlphaNum(s[end]))
        {
            end--;
            continue;
        }
        if (s[st++] != s[end--])
            return false;
    }
    return true;
}

int main()
{
    string S;
    cout << "please enter a string: " << endl;
    cin >> S;
    if (isPalindrom(S))
    {
        cout << S << " is a palindrom string" << endl;
    }
    else
    {
        cout << S << " is not a palindrom string" << endl;
    }
    return 0;
}