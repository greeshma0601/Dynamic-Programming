/*
Minimum number of jumps Submissions: 43761   Accuracy: 33.07%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
               
Problems
Discussions
Given an array of integers where each element represents the max number of steps that can be made forward from that element. Write a function to return the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then cannot move through that element.

Input: 
The first line contains an integer T, depicting total number of test cases.  Then following T lines contains a number n denoting the size of the array. Next line contains the sequence of integers a1, a2, ..., an.

Output:
For each testcase, in a new line, print the minimum number of jumps. If answer is not possible print -1.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 107
0 <= ai <= 107

Example:
Input:
1
11
1 3 5 8 9 2 6 7 6 8 9
Output:
3
*/

#include<iostream>
using namespace std;
int mnj(int a[],int n)
{
    if(a[0] == 0 || n == 0)return -1;
    int dp[n],i,j;
    dp[0]=0;
    for(i=1;i<n;i++)
    dp[i]=INT_MAX;
    for(i=1;i<n;i++)
    for(j=0;j<i;j++)
    {
        if(i<=a[j]+j)
        {
            dp[i]=min(dp[i],dp[j]+1);
        }
    }
    if(dp[n-1] == INT_MAX)return -1;
    return dp[n-1];
    
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 cout<<mnj(a,n)<<endl;
     
 }
	//code
	return 0;
}
