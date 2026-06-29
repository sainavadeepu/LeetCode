/*K-th element of two Arrays
Difficulty: MediumAccuracy: 37.4%Submissions: 411K+Points: 4Average Time: 15m
Given two sorted arrays a[] and b[] and an element k, the task is to find the element that would be at the kth position of the combined sorted array.

Examples :

Input: a[] = [2, 3, 6, 7, 9], b[] = [1, 4, 8, 10], k = 5
Output: 6
Explanation: The final combined sorted array would be [1, 2, 3, 4, 6, 7, 8, 9, 10]. The 5th element of this array is 6.
Input: a[] = [1, 4, 8, 10, 12], b[] = [5, 7, 11, 15, 17], k = 6
Output: 10
Explanation: Combined sorted array is [1, 4, 5, 7, 8, 10, 11, 12, 15, 17]. The 6th element of this array is 10.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int left=0;
        int right=0;
        vector<int> ans;

        while(left<a.size() && right<b.size()){
            if(a[left]<b[right]){
                ans.push_back(a[left]);
                left++;
            }else{
                ans.push_back(b[right]);
                right++;
            }
        }
        while(left<a.size()){
            ans.push_back(a[left]);
            left++;

        }
        while(right<b.size()){
            ans.push_back(b[right]);
            right++;
        }
        return ans[k-1];
   
  }
};
  
  
