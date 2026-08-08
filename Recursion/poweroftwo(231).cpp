/*

Code
Testcase
Testcase
Test Result
231. Power of Two
Solved
Easy
Topics
premium lock icon
Companies
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isvalid=false;
    void solve(long long ans,int n){
        if(ans==n){
            isvalid=true;
            return;
        }
        if(ans>n){
            return;
        }
        solve(ans*2,n);

    }
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        solve(1,n);
        return isvalid;
        
    }
};