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
