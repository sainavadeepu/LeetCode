/*
20. Valid Parentheses
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{'|| s[i]=='['){
                st.push(s[i]);
            }else{
                if(st.empty()) return false;

                char ch=st.top();
                if(s[i]==')' && ch=='(' || s[i]==']' && ch=='[' || s[i]=='}' && ch=='{'){
                    st.pop();

                }else{
                    return false;
                }
            }
        }
        return st.empty();
        
    }
};