/*
Number of Unique Paths Submissions: 4170   Accuracy: 67.15%   Difficulty: Easy   Marks: 2
     
Given a M X N matrix with your initial position at top-left cell, find the number of possible unique paths to reach the bottom right cell of the matrix from the initial position.

Note: Possible moves can be either down or right at any point in time, i.e., we can move to matrix[i+1][j] or matrix[i][j+1] from matrix[i][j].

Input: 
The first line contains an integer T, depicting total number of test cases. 
Then following T lines contains an two integers A and B depicting the size of the grid.

Output:
Print the number of unique paths to reach bottom-right cell from the top-left cell.

Constraints:
1 ≤ T ≤ 30
1 ≤ M ≤ 15
1 ≤ N ≤ 15

Example:
Input
2
2 2
3 4
Output
2
10
// Returns count of possible paths to reach cell at 
// row number m and column  number n from the topmost  
// leftmost cell (cell at 1, 1) 
int numberOfPaths(int m, int n) 
{ 
    // Create a 2D table to store results of subproblems 
    int count[m][n]; 
  
    // Count of paths to reach any cell in first column is 1 
    for (int i = 0; i < m; i++) 
        count[i][0] = 1; 
  
    // Count of paths to reach any cell in first column is 1 
    for (int j = 0; j < n; j++) 
        count[0][j] = 1; 
  
    // Calculate count of paths for other cells in  
    // bottom-up manner using the recursive solution 
    for (int i = 1; i < m; i++) 
    { 
        for (int j = 1; j < n; j++) 
  
            // By uncommenting the last part the code calculatest he total 
            // possible paths if the diagonal Movements are allowed 
            count[i][j] = count[i-1][j] + count[i][j-1]; //+ count[i-1][j-1]; 
  
    } 
    return count[m-1][n-1]; 
} 
  
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int up(int m,int n)
{
    if(m == 1 || n == 1)
    return 1;
    return up(m,n-1)+up(m-1,n);
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int m,n;
 cin>>m>>n;
 int r=up(m,n);
 cout<<r<<endl;
 }
	//code
	return 0;
}
