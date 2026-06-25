/*367. Valid Perfect Square
Solved
Easy
Topics
premium lock icon
Companies
Given a positive integer num, return true if num is a perfect square or false otherwise.

A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.

You must not use any built-in library function, such as sqrt.

 

Example 1:

Input: num = 16
Output: true
Explanation: We return true because 4 * 4 = 16 and 4 is an integer.
Example 2:

Input: num = 14
Output: false
Explanation: We return false because 3.742 * 3.742 = 14 and 3.742 is not an integer.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     int prefectSquare(vector<int> &nums){
        long long left=1;
        long long right=num;
        while(low<=high){
            long long mid=(low+high)/2;
            long long ans=mid*mid;

            if(ans==nums){
                return true;
            }else if(ans<=num){
                low=mid+!;

            }else{
                high=mid-1;

            }
        }
        return false;
     }
};