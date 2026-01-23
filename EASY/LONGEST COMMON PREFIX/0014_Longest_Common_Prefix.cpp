#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     if(strs.empty()){
        return "";
     }  

     string Prefix = strs[0];

     for(int i=1;i<strs.size();i++){
        while(strs[i].find(Prefix) != 0){
            Prefix.pop_back();
        }

        if(Prefix.empty()){
            return "";
        }
     }
     return Prefix;
    }
};