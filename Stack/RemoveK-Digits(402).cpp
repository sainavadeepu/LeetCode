/*
402. Remove K Digits
Solved
Medium
Topics
premium lock icon
Companies
Given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num.

 

Example 1:

Input: num = "1432219", k = 3
Output: "1219"
Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.
Example 2:

Input: num = "10200", k = 1
Output: "200"
Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.
Example 3:

Input: num = "10", k = 2
Output: "0"
Explanation: Remove all the digits from the number and it is left with nothing which is 0.
 

Constraints:

1 <= k <= num.length <= 105
num consists of only digits.
num does not have any leading zeros except for the zero itself.*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string remove(string nums,int k){
        stack<char>st;
        int n=nums.size();
        for(char ch:nums){
            while(!st.empty() && k>0 && st.top()>ch){
                st.pop();
                k=k-1;
            }
            st.push(ch)
        }
        while(k>o && !st.empty()){
            st.pop();
            k--;
        }

        if(st.empty()) return "0";

        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());

        while(start<res.size() && ans[start]=="0"){
            start++;
        }
        res.substr(start);
        return res.empty()?0:res;

    }
};