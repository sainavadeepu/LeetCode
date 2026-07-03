/*

Problem List
Debugging...
Debugging...









0
0Streaks
Extend Your Streak!
DCC Badge

avatar
Avatar
Navadeep_Vedullapalli
Access all features with our Premium subscription!
myLists
My Lists
notebook
Notebook
progress
Progress
points
Points
Try New Features
Orders
My Playgrounds
Settings
Appearance
Sign Out
Premium
Description
Editorial
Editorial
Solutions
Solutions
Submissions
Submissions


Code
Testcase
Testcase
Test Result
392. Is Subsequence
Solved
Easy
Topics
premium lock icon
Companies
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int left=0;
        int right=0;
        int n=s.size();
        while(right<t.size()){
            if(nums[left]==nums[right]){
                left++;
            }
            right++;
        }
        return left==s.size();
        
    }
};