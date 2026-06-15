/*
442. Find All Duplicates in an Array
Solved
Medium
Topics
premium lock icon
Companies
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output

 

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:

Input: nums = [1,1,2]
Output: [1]
Example 3:

Input: nums = [1]
Output: []
 

Constraints:

n == nums.length
1 <= n <= 105
1 <= nums[i] <= n
Each element in nums appears once or twice.*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<numssize();i++){
            int idx=abs(nums[i])-1;
            if(nums[idx]<0){
                ans.push_back(idx+1);
            }else{
                nums[idx]=-nums[idx];
            }
        }
        return ans;
    }
};