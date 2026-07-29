/*
456. 132 Pattern
Solved
Medium
Topics
premium lock icon
Companies
Given an array of n integers nums, a 132 pattern is a subsequence of three integers nums[i], nums[j] and nums[k] such that i < j < k and nums[i] < nums[k] < nums[j].

Return true if there is a 132 pattern in nums, otherwise, return false.

 

Example 1:

Input: nums = [1,2,3,4]
Output: false
Explanation: There is no 132 pattern in the sequence.
Example 2:

Input: nums = [3,1,4,2]
Output: true
Explanation: There is a 132 pattern in the sequence: [1, 4, 2].
Example 3:

Input: nums = [-1,3,2,0]
Output: true
Explanation: There are three 132 patterns in the sequence: [-1, 3, 2], [-1, 3, 0] and [-1, 2, 0].
 

Constraints:

n == nums.length
1 <= n <= 2 * 105
-109 <= nums[i] <= 109*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>st;
        int third=INT_MIN;
        int n=nums.size();

        for(int i=n-1;i>=0;i--){
            if(nums[i]<third){
                return true;
            }
            while(!st.empty() && nums[i]>st.top()){
                third=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
        
    }
};