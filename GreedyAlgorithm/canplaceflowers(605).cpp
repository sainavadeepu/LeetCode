/*

Code
Testcase
Testcase
Test Result
605. Can Place Flowers
Solved
Easy
Topics
premium lock icon
Companies
You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

 

Example 1:

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true
Example 2:

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ni=flowerbed.size();
        for(int i=0;i<ni;i++){
            if(flowerbed[i]==0){
                int left=(i==0)||(flowerbed[i-1]==0);
                int right=(i==ni-1)||(flowerbed[i+1]==0);

                if(left && right){
                    flowerbed[i]=1;
                    n--;
                    if(n==0){
                        return true;
                    }
                }
            }
        }
        return n<=0;
        
    }
};