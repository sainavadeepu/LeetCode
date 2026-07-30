/*
628. Maximum Product of Three Numbers
Solved
Easy
Topics
premium lock icon
Companies
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

 

Example 1:

Input: nums = [1,2,3]
Output: 6
Example 2:

Input: nums = [1,2,3,4]
Output: 24
Example 3:

Input: nums = [-1,-2,-3]
Output: -6
 

Constraints:

3 <= nums.length <= 104
-1000 <= nums[i] <= 1000*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void Maxproduct(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int n=nums.size();

        int p1=(nums[n-1]*nums[n-2]*nums[n-3]);
        int p2=(nums[0]*nums[1]*nums[n-1]);

        return max(p1,p2);
    }
};