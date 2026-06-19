/*Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 5
Output: 1
Explanation: Largest number less than or equal to 5 is 2, whose index is 1.
Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 11
Output: 4
Explanation: Largest Number less than or equal to 11 is 10, whose indices are 3 and 4. The index of last occurrence is 4*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int floor(vector<int>& arr, int target) {
      int low=0;
      int n=arr.size();
      int high=n-1;
      int ans=-1;
      while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]<=target){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }

      }
      return ans;

    }
};