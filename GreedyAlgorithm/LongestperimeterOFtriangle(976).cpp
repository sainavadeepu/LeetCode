/*
976. Largest Perimeter Triangle
Solved
Easy
Topics
premium lock icon
Companies
Given an integer array nums, return the largest perimeter of a triangle with a non-zero area, formed from three of these lengths. If it is impossible to form any triangle of a non-zero area, return 0.

 

Example 1:

Input: nums = [2,1,2]
Output: 5
Explanation: You can form a triangle with three side lengths: 1, 2, and 2.
Example 2:

Input: nums = [1,2,1,10]
Output: 0
Explanation: 
You cannot use the side lengths 1, 1, and 2 to form a triangle.
You cannot use the side lengths 1, 1, and 10 to form a triangle.
You cannot use the side lengths 1, 2, and 10 to form a triangle.
As we cannot use any three side lengths to form a triangle of non-zero area, we return 0.*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public int longestperimeter(int [] nums){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n-2;i++){
            int lower=nums[i]+nums[i+1];
            if(lower>nums[i+2]){
                maxi=max(maxi,lower+nums[i+2]);
            }
        }
        return maxi;
    }
}