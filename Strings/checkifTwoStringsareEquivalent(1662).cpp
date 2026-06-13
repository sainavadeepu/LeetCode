/*Example 1:

Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
Output: true
Explanation:
word1 represents string "ab" + "c" -> "abc"
word2 represents string "a" + "bc" -> "abc"
The strings are the same, so return true.
Example 2:

Input: word1 = ["a", "cb"], word2 = ["ab", "c"]
Output: false
Example 3:

Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
Output: true
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       string ans1="";
       string ans2="";

       for(string word:word1){
        ans1+word;
       }
       for(string word:word2){
        ans2+=word;
       }
       return ans1==ans2;
    }
};