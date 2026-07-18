/*
594. Longest Harmonious Subsequence
Solved
Easy
Topics
premium lock icon
Companies
We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.

Given an integer array nums, return the length of its longest harmonious subsequence among all its possible subsequences.

 

Example 1:

Input: nums = [1,3,2,2,5,2,3,7]

Output: 5

Explanation:

The longest harmonious subsequence is [3,2,2,2,3].

Example 2:

Input: nums = [1,2,3,4]

Output: 2

Explanation:

The longest harmonious subsequences are [1,2], [2,3], and [3,4], all of which have a length of 2.

Example 3:

Input: nums = [1,1,1,1]

Output: 0

Explanation:

No harmonic subsequence exists*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLHS(vector<int>& nums) {
        int left=0;
        int ans=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int right=0;right<n;right++){
        while(nums[right]-nums[left]>1){
            left++;
        }
        if(nums[right]-nums[left]==1){
            ans=max(ans,right-left+1);
        }
        }
        return ans;
        
    }
};