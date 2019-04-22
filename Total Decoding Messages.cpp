/*
Total Decoding Messages
A top secret message containing letters from A-Z is being encoded to numbers using the following mapping:

'A' -> 1
'B' -> 2
...
'Z' -> 26
You are an FBI agent. You have to determine the total number of ways that message can be decoded.
Note: An empty digit sequence is considered to have one decoding. It may be assumed that the input contains valid digits from 0 to 9 and If there are leading 0’s, extra trailing 0’s and two or more consecutive 0’s then it is an invalid string.

Example :
Given encoded message "123",  it could be decoded as "ABC" (1 2 3) or "LC" (12 3) or "AW"(1 23).
So total ways are 3.

Input:
First line contains the test cases T.  1<=T<=1000
Each test case have two lines
First is length of string N.  1<=N<=40
Second line is string S of digits from '0' to '9' of N length.

Example:
Input:
2
3
123
4
2563
Output:
3
2
 
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int dm(string s,int n)
{
    if(s[0] == '0')return 0;
    int c[n+1];

    c[0]=1;c[1]=1;
    for(int i=2;i<=n;i++)
    {
        c[i]=0;
        if(s[i-1]>'0')c[i]=c[i-1];
        if(s[i-2] == '1' || s[i-2] == '2' && s[i-1]<'7')
        {
            c[i]+=c[i-2];
        }
    }
    return c[n];
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int n;cin>>n;
 string s;
 cin>>s;
 cout<<dm(s,n)<<endl;
 }
	//code
	return 0;
}
