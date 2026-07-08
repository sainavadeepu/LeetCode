/*
930. Binary Subarrays With Sum
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.

A subarray is a contiguous part of the array.

 

Example 1:

Input: nums = [1,0,1,0,1], goal = 2
Output: 4
Explanation: The 4 subarrays are bolded and underlined below:
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
Example 2:

Input: nums = [0,0,0,0,0], goal = 0
Output: 15*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        return atmost(nums,goal)-atmost(nums,goal-1);
    }
    int atmost(vector <int> &nums, int goal){
        if(goal<0)  return 0;
        int left=0;
        int right=0;
        int sum=0;
        int count=0;
        for(right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>goal){
                sum-=nums[left];
                left++;
            }
            count+=(right-left+1);
            
        }
        return count;
        
    }
};