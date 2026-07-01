/*
Code
Testcase
Testcase
Test Result
3. Longest Substring Without Repeating Characters
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given a string s, find the length of the longest substring without duplicate characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256,-1);
        int left=0;
        int right=0;
        int n=s.size();
        int len=0;
        while(right<n){
            if(mpp[s[right]]!=-1){
                left=max(mpp[s[right]]+1,left);
            }
            mpp[s[right]]=right;
            len=max(len,right-left+1);
            right++;
        }
        return len;
        
    }
};
