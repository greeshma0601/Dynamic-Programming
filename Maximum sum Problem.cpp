/*
Maximum sum Problem
Given a number n, we can divide it in only three parts n/2, n/3 and n/4 (we will consider only integer part). The task is to find the maximum sum we can make by dividing number in three parts recursively and summing up them together.
Note: Sometimes, the maximum sum can be obtained by not dividing n.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line of each test case contains the integer n.

Output:
For each testcase, in a new line, print the maximum sum possible.

Constraints:
1<= T <=100
1<= n <=105

Example:
Input:
2
12 
24

Output:
13 
27

Explanation:
Testcase1:
Input : n = 12
Output : 13
We break n = 12 in three parts {12/2, 12/3, 12/4} = {6, 4, 3},  now current sum is = (6 + 4 + 3) = 13
Again, we break 6 = {6/2, 6/3, 6/4} = {3, 2, 1} = 3 + 2 + 1 = 6 and further breaking 3, 2 and 1 we get maximum
summation as 1, so breaking 6 in three parts produces maximum sum 6 only similarly breaking 4 in three parts we can get maximum sum 4 and same for 3 also. Thus maximum sum by breaking number in parts  is=13
Testcase2:
Input : n = 24
Output : 27
We break n = 24 in three parts {24/2, 24/3, 24/4} = {12, 8, 6},  now current sum is = (12 + 8 + 6) = 16
As seen in example, recursively breaking 12 would produce value 13. So our maximum sum is 13 + 8 + 6 = 27.
Note that recursively breaking 8 and 6 doesn't produce more values, that is why they are not broken further.

 
*/
include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int n,i;
 cin>>n;
 int dp[n+1];
 dp[0]=0;dp[1]=1;
 for(i=2;i<=n;i++)
 dp[i]=max(dp[i/2]+dp[i/3]+dp[i/4],i);
 cout<<dp[n]<<endl;
 }
	//code
	return 0;
}
