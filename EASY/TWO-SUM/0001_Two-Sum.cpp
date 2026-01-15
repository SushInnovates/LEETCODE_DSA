// LeetCode 1 - Two Sum
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            int  need;
            need = target - x;
            if (mp.find(need) != mp.end()) {
                return {mp[need],i};
            } else {
                mp[x] = i;
            }
        }
        return {};
    }
    };


