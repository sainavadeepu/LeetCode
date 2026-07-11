/*917. Reverse Only Letters
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.

 

Example 1:

Input: s = "ab-cd"
Output: "dc-ba"
Example 2:

Input: s = "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"
Example 3:

Input: s = "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(!isalpha(s[left])){
                left++;
            }else if(!isalpha(s[right])){
                right--;
            }else{
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
        
    }
};