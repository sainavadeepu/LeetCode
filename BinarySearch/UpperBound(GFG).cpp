/*
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int low=0;
        int n=arr.size();
        int high=n-1;
        int ans=arr.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>target){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};