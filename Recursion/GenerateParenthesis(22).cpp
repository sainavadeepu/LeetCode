/*
22. Generate Parentheses
Solved
Medium
Topics
premium lock icon
Companies
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string>ans;
    
    void solve(string s,int open, int close, int n){
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            solve(s+"(",open+1,close,n);
        }
        if(close<n){
            solve(s+")",open,close+1,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        solve("",0,0,n);
        return ans;
        
    }
};