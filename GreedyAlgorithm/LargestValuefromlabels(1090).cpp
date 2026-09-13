/*
1090. Largest Values From Labels
Solved
Medium
Topics
premium lock icon
Companies
Hint
You are given n item's value and label as two integer arrays values and labels. You are also given two integers numWanted and useLimit.

Your task is to find a subset of items with the maximum sum of their values such that:

The number of items is at most numWanted.
The number of items with the same label is at most useLimit.
Return the maximum sum.

 

Example 1:

Input: values = [5,4,3,2,1], labels = [1,1,2,2,3], numWanted = 3, useLimit = 1

Output: 9

Explanation:

The subset chosen is the first, third, and fifth items with the sum of values 5 + 3 + 1.

Example 2:

Input: values = [5,4,3,2,1], labels = [1,3,3,3,2], numWanted = 3, useLimit = 2

Output: 12

Explanation:

The subset chosen is the first, second, and third items with the sum of values 5 + 4 + 3.

Example 3:

Input: values = [9,8,8,7,6], labels = [0,0,0,1,1], numWanted = 3, useLimit = 1

Output: 16*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        vector<pair<int,int>>items;
        int n=values.size();
        for(int i=0;i<n;i++){
            items.push_back({values[i],labels[i]});
        }
        sort(items.begin(),items.end(),greater<pair<int,int>>());

        map<int,int>mp;
        int ans=0;
        int count=0;
        for(auto &it:items){
            int value=it.first;
            int label=it.second;

            if(mp[label]<useLimit){
                ans+=value;
                mp[label]++;
                count++;

                if(count==numWanted){
                    break;
                }
            }
        }
        return ans;
        
    }
};