/*

Code
Testcase
Testcase
Test Result
844. Backspace String Compare
Solved
Easy
Topics
premium lock icon
Companies
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".
Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
        for(char ch:s){
            if(ch=='#'){
                if(!s1.empty()){
                    s1.pop();
                }
            }else{
                s1.push(ch);
            }
        }
        for(char ch:t){
            if(ch=='#'){
                if(!s2.empty()){
                    s2.pop();
                }
            }else{
                s2.push(ch);
            }
        }

        while(!s1.empty() && !s2.empty()){
            if(s1.top()!=s2.top()){
                return false;
            }
            s1.pop();
            s2.pop();
        }
        return s1.empty() && s2.empty();
    }
};