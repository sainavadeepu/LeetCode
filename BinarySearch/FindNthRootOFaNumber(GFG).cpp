/*Given two numbers N and M, find the Nth root of M. The Nth root of a number M is defined as a number X such that when X is raised to the power of N, it equals M. If the Nth root is not an integer, return -1.


Example 1

Input: N = 3, M = 27

Output: 3

Explanation: The cube root of 27 is equal to 3.

Example 2

Input: N = 4, M = 69

Output:-1

Explanation: The 4th root of 69 does not exist. So, the answer is -1
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long pow(long long base,int n){
        long long ans=1;
        for(int i=0;i<n;i++){
            ans*=base;
        }
        return ans;
    }
    int NthRoot(int n, int m) {
        int low=1;
        int high=m;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            lon long val=pow(mid,n);
            if(val==mid){
                return mid;
            }else if(val<m){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};