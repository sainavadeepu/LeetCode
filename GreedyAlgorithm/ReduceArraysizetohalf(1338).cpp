/*
1338. Reduce Array Size to The Half
Solved
Medium
Topics
premium lock icon
Companies
Hint
You are given an integer array arr. You can choose a set of integers and remove all the occurrences of these integers in the array.

Return the minimum size of the set so that at least half of the integers of the array are removed.

 

Example 1:

Input: arr = [3,3,3,3,5,5,5,2,2,7]
Output: 2
Explanation: Choosing {3,7} will make the new array [5,5,5,2,2] which has size 5 (i.e equal to half of the size of the old array).
Possible sets of size 2 are {3,5},{3,2},{5,2}.
Choosing set {2,7} is not possible as it will make the new array [3,3,3,3,5,5,5] which has a size greater than half of the size of the old array.
Example 2:

Input: arr = [7,7,7,7,7,7]
Output: 1
Explanation: The only possible set you can choose is {7}. This will make the new array empty*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int a:arr){
            mp[a]++;
        }
        vector<int>count;
        for(auto &it:mp){
            count.push_back(it.second);
        }
        sort(count.begin(),count.end(),greater<int>());
        int removed=0;
        int ans=0;
        int ni=n/2;
        for(int x:count){
            removed+=x;
            ans++;

            if(removed>=ni){
                return ans;
            }
        }
        return ans;
        
    }
};
