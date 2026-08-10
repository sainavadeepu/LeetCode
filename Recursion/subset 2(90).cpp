/*
Code
Testcase
Testcase
Test Result
90. Subsets II
Solved
Medium
Topics
premium lock icon
Companies
Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>ans;
    void solve(int index,vector<int>& arr,vector<int>& temp){
        if(index==arr.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(arr[index]);
        solve(index+1,arr,temp);
        temp.pop_back();
        while(index+1<arr.size() && arr[index]==arr[index+1]){
            index++;
        }
        solve(index+1,arr,temp);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        solve(0,nums,temp);
        return ans;
        
    }
};