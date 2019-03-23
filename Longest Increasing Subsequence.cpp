/*
Longest Increasing Subsequence
Given a sequence A of size N, find the length of the longest increasing subsequence from a given sequence .
The longest increasing subsequence means to find a subsequence of a given sequence in which the subsequence's elements are in sorted order, lowest to highest, and in which the subsequence is as long as possible. This subsequence is not necessarily contiguous, or unique.

Note: Duplicate numbers are not counted as increasing subsequence.

Input:
The first line contains an integer T, depicting total number of test cases. Then following T lines contains an integer N depicting the size of array and next line followed by the value of array.

Output:
For each testcase, in a new line, print the Max length of the subsequence in a separate line.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 1000
0 ≤ A[i] ≤ 300

Example:
Input:
1
16
0 8 4 12 2 10 6 14 1 9 5 13 3 11 7 15
Output
6
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int lis(int a[],int n)
{
    int l[n];int i,j;
    for(i=0;i<n;i++)
    l[i]=1;
    
    for( i=1;i<n;i++)
    {
        
        for( j=0;j<i;j++)
        
            if(a[i]>a[j] )
            
            l[i]=max(l[j]+1,l[i]);
        
    }
/*for(int i=0;i<n;i++)
cout<<l[i]<<" "<<endl;*/
    return *max_element(l,l+n);;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 cout<<lis(a,n)<<endl;
 }
	//code
	return 0;
}
