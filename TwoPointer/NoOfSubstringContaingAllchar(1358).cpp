/*
1358. Number of Substrings Containing All Three Characters
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given a string s consisting only of characters a, b and c.

Return the number of substrings containing at least one occurrence of all these characters a, b and c.

 

Example 1:

Input: s = "abcabc"
Output: 10
Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again). 
Example 2:

Input: s = "aaacb"
Output: 3
Explanation: The substrings containing at least one occurrence of the characters a, b and c are "aaacb", "aacb" and "acb". 
Example 3:

Input: s = "abc"
Output: 1
 

Constraints:

3 <= s.length <= 5 x 104
s only consists of 'a', 'b' or 'c' characters*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0;
        int right=0;
        int n=s.size();
        int ans=0;
        vector<int> count(3,0);
        for(int right=0;right<n;right++){
            count[s[right]-'a']++;
            while(count[0]>0 && count[1]>0 && count[2]>0){
                ans+=n-right;
                count[s[left]-'a']--;
                left++;
            }
        }
        return ans;
        
    }
};