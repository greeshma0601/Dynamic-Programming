/*
Maximize Dot Product Submissions: 12210   Accuracy: 14.46%   Difficulty: Easy   Marks: 2
       
Problems
Given a array A with N elements and array B with M elements. You have to insert (N-M) zeroes in between array B such that the dot product of array A and array B is maximum. 

Definition of Dot Product : A.B = A[0]*B[0] + A[1]*B[1]+....A[N]*B[N].

Input :
The first line will contain T which denotes the number of test cases. The first line of each test case will contain integer N and M, denoting the length of array A and array B respectively. The second line of each test case will contain N integers denoting the elements of array A. The third line of each test case will contain M integers denoting the elements of array B.
 

Output:
For each test case, Output the maximized dot product in a new line .
 

Constraints :
1<=T<=10
1<= N,M<=1000
0<=A[i],B[i]<=10^7
 

Example
Input : 

1

3 1 

1 2 3

4

Output :
12 
*/
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	//code
	int t,i,j;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	     long long int a[n];
	     long long int b[m];
	    int d=n-m;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<m;i++)
	    cin>>b[i];
	    long long int dp[m+1][n+1];
	    //memset(dp, 0, sizeof(dp));
	    /*for(i=0;i<=n;i++)
	    dp[0][i]=0;
	    for(j=0;j<=m;j++)
        dp[j][0]=0;*/
        for(i=0;i<=m;i++)
        {
            for(j=0;j<=n;j++)
            {
                dp[i][j]=0;
            }
        }
	    for(i=1;i<=m;i++)
	    {
	        for(j=i;j<=n;j++)
	        dp[i][j]=max(dp[i][j-1],a[j-1]*b[i-1]+dp[i-1][j-1]);
	    }
	    cout<<dp[m][n]<<endl;
	}
	return 0;
}
