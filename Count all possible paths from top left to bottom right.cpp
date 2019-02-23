/*
Count all possible paths from top left to bottom right Submissions: 14666   Accuracy: 34.37%   Difficulty: Easy   Marks: 2
Associated Course(s):   Sudo Placement [IITs]
          
The task is to count all the possible paths from top left to bottom right of a mXn matrix with the constraints that from each cell you can either move only to right or down.

Input: 
First line consists of T test cases. First line of every test case consists of N and M, denoting the number of rows and number of column respectively.

Output: 
Single line output i.e count of all the possible paths from top left to bottom right of a mXn matrix. Since output can be very large number use %10^9+7.

Constraints:
1<=T<=100
1<=N<=100
1<=M<=100

Example:
Input:
1
3 3
Output:
6
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,m;
 cin>>n>>m;
 int a[n][m];
 int i,j;
 int mod=pow(10,9)+7;
 for(i=0;i<n;i++)
 for(j=0;j<m;j++)
 {
     if(i==0 || j == 0)
     a[i][j]=1;
 }
 for(i=1;i<n;i++)
 for(j=1;j<m;j++)
 {
     a[i][j]=(a[i-1][j]%mod+a[i][j-1]%mod)%mod;
 }
 cout<<a[n-1][m-1]%mod<<endl;
 }
	//code
	return 0;
}
