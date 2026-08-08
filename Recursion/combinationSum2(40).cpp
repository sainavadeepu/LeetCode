/*

Code
Testcase
Testcase
Test Result
40. Combination Sum II
Solved
Medium
Topics
premium lock icon
Companies
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

 

Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>ans;
    void solve(int index,vector<int>& arr, int target, vector<int>& temp){
        if(target==0){
            ans.push_back(temp);
            return;

        }
        if(index==arr.size() || target<0){
            return;
        }

        temp.push_back(arr[index]);
        solve(index+1,arr,target-arr[index],temp);
        temp.pop_back();

        while(index+1<arr.size() && arr[index]==arr[index+1]){
            index++;
        }
        solve(index+1,arr,target,temp);

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>temp;

        solve(0,candidates,target,temp);

        return ans;
        
    }
};