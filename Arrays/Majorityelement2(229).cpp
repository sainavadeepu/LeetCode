/*
229. Majority Element II
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ls;
        map<int, int> mpp;
        int n=nums.size();
        int mini=(int)(n/3)+1;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==mini){

                ls.push_back(nums[i]);
            }
            if(ls.size()==2) break;
        }
        sort(ls.begin(), ls.end());
        return ls;
        
    }
};