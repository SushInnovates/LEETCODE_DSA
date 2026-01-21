#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int Left = 0;
        int Right = s.size() - 1;

        while (Left < Right)
        {
            char temp = s[Left];
            s[Left++] = s[Right];
            s[Right--] = temp;
        }
    }
};