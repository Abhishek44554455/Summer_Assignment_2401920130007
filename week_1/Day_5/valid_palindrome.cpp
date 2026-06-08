#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.length()-1;
        for(auto &x:s){
            x=tolower(x);
        }
        
            while(start<end){
                if(!isalpha(s[start])){
                    start++;
                    continue;
                }else if(!isalpha(s[end])){
                    end--;
                    continue;
                }
                else if(s[start]!=s[end]){
                    return false;
                }
                start++,end--;
            }
            return true;
        
    }
};