/*

Code
Testcase
Testcase
Test Result
441. Arranging Coins
Solved
Easy
Topics
premium lock icon
Companies
You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.

Given the integer n, return the number of complete rows of the staircase you will build.

 

Example 1:


Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.
Example 2:


Input: n = 8
Output: 3
Explanation: Because the 4th row is incomplete, we return 3.*/

class Solution {
public:
    int arrangeCoins(int n) {
        long long low=1;
        long long high=n;
        long long ans=0;

        while(low<=high){
            long long mid=(low+high)/2;
            long long coins=(mid)*(mid+1)/2;

            if(coins<=n){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
        
    }
};