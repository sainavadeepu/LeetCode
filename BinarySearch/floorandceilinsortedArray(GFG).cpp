/*floor and ceil ina sorted array 
arr = [1,2,4,6,10]
x = 5
{4, 6}
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    pair<int,int> floorAndCeil(vector<int>& arr, int x) {
        intlow=0;
        int n=arr.size();
        int high=n-1;
        int floor=-1;
        int ceil=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==x){
                floor=ceil=arr[mid];
                return {floor,ceil};
            }else if(arr[mid]<x){
                floor=arr[mid];
                low=mid+1;

            }else{
                ceil=arr[mid];
                high=mid-1;
            }
        }
        return {floor,ceil};
    }
};