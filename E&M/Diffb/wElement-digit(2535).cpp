/*

Code
Testcase
Testcase
Test Result
2535. Difference Between Element Sum and Digit Sum of an Array
Solved
Easy
Topics
premium lock icon
Companies
Hint
You are given a positive integer array nums.

The element sum is the sum of all the elements in nums.
The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.
Return the absolute difference between the element sum and digit sum of nums.

Note that the absolute difference between two integers x and y is defined as |x - y|.

 

Example 1:

Input: nums = [1,15,6,3]
Output: 9
Explanation: 
The element sum of nums is 1 + 15 + 6 + 3 = 25.
The digit sum of nums is 1 + 1 + 5 + 6 + 3 = 16.
The absolute difference between the element sum and digit sum is |25 - 16| = 9.
Example 2:

Input: nums = [1,2,3,4]
Output: 0
Explanation:
The element sum of nums is 1 + 2 + 3 + 4 = 10.
The digit sum of nums is 1 + 2 + 3 + 4 = 10.
The absolute difference between the element sum and digit sum is |10 - 10| = 0*/
#include<bits/stdc++.h.
using namespace std;
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementsum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            elementsum+=nums[i];

        }
        int digitsum=0;
        for(int i=0;i<n;i++){
            int add=0;
            if(nums[i]>9){
                int m=nums[i];
                while(m>0){
                  int add=m%10;
                  digitsum+=add;
                  m=m/10;
                }


            }else{
                digitsum+=nums[i];
            }
        }
        return abs(elementsum-digitsum);
        
    }
};