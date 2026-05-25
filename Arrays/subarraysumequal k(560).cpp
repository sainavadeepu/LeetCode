/*560. Subarray Sum Equals K
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2*/
#include <bits/stdc++.h>    
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int count=0;
        int prefix=0;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];

            if(mp.find(prefix-k)!=mp.end()){
                count+=mp[prefix-k];
            }
            mp[prefix]++;
        }
        return count;
    }
};
