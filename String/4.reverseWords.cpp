#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s)
{
    reverse(s.begin(), s.end());
    int n = s.length();
    string ans = "";

    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i < n && s[i] != ' ')
        {
            word += s[i++];
        }
        reverse(word.begin(), word.end());
        ans += " " + word;
    }
    return ans.substr(1);
}

int main()
{
    string s = "my college is anand ice jaipur";
    cout << reverseWords(s);
    return 0;
}