/*
Maximum sum increasing subsequence
Given an array A of N positive integers. Find the sum of maximum sum increasing subsequence of the given array.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N(the size of array). The second line of each test case contains array elements.

Output:
For each test case print the required answer in new line.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 106
1 ≤ Ai ≤ 106

Example:
Input:
2
7
1 101 2 3 100 4 5
4
10 5 4 3

Output:
106
10

Explanation:
Testcase 1: All the increasing subsequences are : (1,101); (1,2,3,100); (1,2,3,4,5). Out of these (1, 2, 3, 100) has maximum sum,i.e., 106.

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int msi(int a[],int n)
{
    int msis[n];
    for(int i=0;i<n;i++)
    msis[i]=a[i];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        if(a[i]>a[j])
        msis[i]=max(msis[i],msis[j]+a[i]);
    }
    return *max_element(msis,msis+n);
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 int a[n];for(i=0;i<n;i++)cin>>a[i];
 cout<<msi(a,n)<<endl;
     
 }
	//code
	return 0;
}
