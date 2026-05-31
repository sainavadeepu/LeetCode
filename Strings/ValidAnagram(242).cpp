/*242. Valid Anagram
Solved
Easy
Topics
premium lock icon
Companies
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false*/
#include <bits/stdc++.h>            
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
           return false;
        vector<int> count(26,0);

        for(char c: s){
            count[c-'a']++;
        }
        for(char c : t){
            count[c-'a']--;

        }
        for(int i=0;i<26;i++){
            if(count[i]!=0)
               return false;
        }
        return true;

        
    }
};