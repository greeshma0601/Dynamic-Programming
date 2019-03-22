/*
Consecutive 1's not allowed
Given a positive integer N, count all possible distinct binary strings of length N such that there are no consecutive 1’s. Output your answer mod 10^9 + 7.

Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.
Each test case contain an integer N representing length of the binary string.

Output:
Print the count number of binary strings without consecutive 1’s of length N.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 100

Example:
Input:
2
3
2

Output:
5
3

Explanation:
Testcase 1: case 5 strings are (000, 001, 010, 100, 101)
Testcse 2:  case 3 strings are (00,01,10)

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define m 1000000007
int countstr(int n)
{
    int a[n],b[n];
    a[0]=b[0]=1;
    for(int i=1;i<n;i++)
    {
        a[i]=(a[i-1]%m+b[i-1]%m)%m;
        b[i]=a[i-1]%m;
    }
    return (a[n-1]%m+b[n-1]%m)%m;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int n;
 cin>>n;
 cout<<countstr(n)<<endl;
 }
	//code
	return 0;
}
