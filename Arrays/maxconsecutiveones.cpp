/*485. Max Consecutive Ones
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        
        int i=0;
        int maxi=0;
        int n=arr.size();
        int count=0;
        
        for(int j=0;j<n;j++){
            
            if(arr[j]==1){
                count++;
                maxi=max(count,maxi);

            }else{
                count=0;
            }
        }
        return maxi;

        
    }
};