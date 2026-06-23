/*Find square root of a number
Subscribe to TUF+

Hints
Company
Given a positive integer n. Find and return its square root. If n is not a perfect square, then return the floor value of sqrt(n).


Example 1

Input: n = 36

Output: 6

Explanation: 6 is the square root of 36.

Example 2

Input: n = 28

Output: 5

Explanation: The square root of 28 is approximately 5.292. So, the floor value will be 5
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int floorSqrt(int x)
    {
       int low=0;
        int high=n;
        int ans=0;
        while(low<=high){
            long long mid=(low+high)/2;
            long long val=mid*mid;

            if(val<=n){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
            
        }
        return ans;
        
    }
};