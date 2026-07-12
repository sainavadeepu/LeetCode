/*
350. Intersection of Two Arrays II
Solved
Easy
Topics
premium lock icon
Companies
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.*/

#include<bits/stdc++.h>
using namesspace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int left=0;
        int right=0;
        vector<int>ans;
        while(left<nums1.size() && right<nums2.size()){
            if(nums1[left]==nums2[right]){
                ans.push_back(nums1[left]
                );
                left++;
                right++;
            }else if(nums1[left]<nums2[right]){
                left++;
            }else{
                right++;
            }
        }
        return ans;    
    }
};