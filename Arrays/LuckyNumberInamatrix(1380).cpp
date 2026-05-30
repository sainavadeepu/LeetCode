/*
1380. Lucky Numbers in a Matrix
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.

A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

 

Example 1:

Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
Output: [15]
Explanation: 15 is the only lucky number since it is the minimum in its row and the maximum in its column.
Example 2:

Input: matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]
Output: [12]
Explanation: 12 is the only lucky number since it is the minimum in its row and the maximum in its column.
Example 3:

Input: matrix = [[7,8],[1,2]]
Output: [7]
Explanation: 7 is the only lucky number since it is the minimum in its row and the maximum in its column.*/
#include <bits/stdc++.h>
using namespace std;        
class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        
        vector<int> ans;

        int r = matrix.size();
        int c = matrix[0].size();

        vector<int> minr(r);
        vector<int> maxc(c);

        for(int i = 0; i < r; i++) {
            int mini = INT_MAX;

            for(int j = 0; j < c; j++) {
                mini = min(mini, matrix[i][j]);
            }

            minr[i] = mini;
        }

        for(int j = 0; j < c; j++) {
            int maxi = INT_MIN;

            for(int i = 0; i < r; i++) {
                maxi = max(maxi, matrix[i][j]);
            }

            maxc[j] = maxi;
        }

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {

                if(matrix[i][j] == minr[i] && matrix[i][j] == maxc[j]) {

                    ans.push_back(matrix[i][j]);
                }
            }
        }

        return ans;
    }
};