#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string str1;
        string str2;

        for (int i = 0; i <= s.length(); i++)
        {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    str1 += 'a' + (s[i] - 'A');
                }
                else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                {
                    str1 += s[i];
                }
            }
        }

        for (int i = str1.length() - 1; i >= 0; i--)
        {
            str2 += str1[i];
        }

        if (str1 == str2)
            return true;
        else
            return false;
    }
};