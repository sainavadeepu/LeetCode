/*
766. Toeplitz Matrix
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given an m x n matrix, return true if the matrix is Toeplitz. Otherwise, return false.

A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements.

 

Example 1:


Input: matrix = [[1,2,3,4],[5,1,2,3],[9,5,1,2]]
Output: true
Explanation:
In the above grid, the diagonals are:
"[9]", "[5, 5]", "[1, 1, 1]", "[2, 2, 2]", "[3, 3]", "[4]".
In each diagonal all elements are the same, so the answer is True.
Example 2:


Input: matrix = [[1,2],[2,2]]
Output: false
Explanation:
The diagonal "[1, 2]" has different elements.*/
#include <bits/stdc++.h>
using namespace std;    
class Solution {
public: 
    bool istoeplitzm(vector<vector<int>>& matrix){
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r-1;i++){
            for(int j=0;j<c-1;j++){
                if(matrix[i][j]!=matrix[i+1][j+1]){
                    return false;
                }
            }
        }
        return true;
    }
};
