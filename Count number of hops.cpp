/*
A frog jumps either 1, 2 or 3 steps to go to top. In how many ways can it reach the top

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains one line of input N denoting the total number of steps.

Output:
For each testcase, in a new line, print the number of ways to reach the top.

Constraints:
1≤ T ≤ 100
1 ≤ N ≤ 50

Example:
Input:
2
1
5
Output:
1
13


*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int printd(int d)
{
    if(d<0)return 0;
    int count[d+1];
    count[0]=1,count[1]=1,count[2]=2;
    for(int i=3;i<=d;i++)
    count[i]=count[i-1]+count[i-2]+count[i-3];
    return count[d];
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int d;
 cin>>d;
 cout<<printd(d)<<endl;
 }
	//code
	return 0;
}
