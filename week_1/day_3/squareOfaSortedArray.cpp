#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int start=0;
        int end=nums.size()-1;
        int pos=nums.size()-1;
        while(start<=end){
            if(abs(nums[start])>abs(nums[end])){
                result[pos]=nums[start]*nums[start];
                start++;
            }else{
                result[pos]=nums[end]*nums[end];
                end--;
            }
            pos--;
        }
        return result;
    }
};