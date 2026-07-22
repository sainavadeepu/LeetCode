/*
316. Remove Duplicate Letters
Medium
Topics
premium lock icon
Companies
Hint
Given a string s, remove duplicate letters so that every letter appears once and only once. You must make sure your result is the smallest in lexicographical order among all possible results.

 

Example 1:

Input: s = "bcabc"
Output: "abc"
Example 2:

Input: s = "cbacdcbc"
Output: "acdb*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last(26);
        vector<int>visited(26,false);
        int n=s.size();
        for(int i=0;i<n;i++){
            last[s[i]-'a']=i;
        }
        stack<char>st;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(visited[ch-'a']){
                continue;
            }

            while(!st.empty() && ch<st.top() && last[st.top()-'a']>i){
                visited[st.top()-'a']=false;
                st.pop();
            }
            st.push(ch);
            visited[ch-'a']=true;
            
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
