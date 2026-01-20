#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        int Left = 0;
        int Right = s.length() - 1;

        while (Left < Right)
        {
            while (Left < Right && !isalnum(s[Left]))
            {
                Left++;
            }

            while (Left < Right && !isalnum(s[Right]))
            {
                Right--;
            }

            if (tolower(s[Left]) != tolower(s[Right]))
            {
                return false;
            }
            Left++;
            Right--;
        }
        return true;
    }
};


