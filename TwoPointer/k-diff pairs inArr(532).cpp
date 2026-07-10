/*532. K-diff Pairs in an Array
Solved
Medium
Topics
premium lock icon
Companies
Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

0 <= i, j < nums.length
i != j
|nums[i] - nums[j]| == k
Notice that |val| denotes the absolute value of val.

 

Example 1:

Input: nums = [3,1,4,1,5], k = 2
Output: 2
Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
Although we have two 1s in the input, we should only return the number of unique pairs.
Example 2:

Input: nums = [1,2,3,4,5], k = 1
Output: 4
Explanation: There are four 1-diff pairs in the array, (1, 2), (2, 3), (3, 4) and (4, 5).
Example 3:

Input: nums = [1,3,1,5,4], k = 0
Output: 1
Explanation: There is one 0-diff pair in the array, (1, 1)
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int findpairs(vector<int>& nums,int k){
        int n=nums.size();
        int left=0;
        int right=0;
        int count=0;
        sort(nums.begin(),nums.end());
        while(right<n){
            if(nums[right]-nums[left]>k){
                left++;
            }else if(nums[right]-nums[left]<k){
                right++;
            }else{
                count++;
                left++;
                right++;
                while(right<n && nums[right]==nums[right-1]){
                    right++;
                }
            }
        }
        return count;
    }
}