/*HINT:Find lcs of strings and then l1+l2-r gives scs
Shortest Common Supersequence
Given two strings str1 and str2, find the length of the smallest string which has both, str1 and str2 as its sub-sequences.
Note: str1 and str2 can have both uppercase and lowercase letters.

Input:
The first line of input contains an integer T denoting the number of test cases.Each test case contains two space separated strings.

Output:
For each testcase, in a new line, output the length of the required string.

Constraints:
1 <= T <= 100
1<= |str1|, |str2| <= 100

Example:
Input:
2
abcd xycd
efgh jghi
Output:
6
6

*/


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int lcs(string s1,string s2)
{
    int l1=s1.length();int l2=s2.length();
    int a[l1+1][l2+1];
    for(int i=0;i<=l1;i++)
    a[i][0]=0;
    for(int i=0;i<=l2;i++)
    a[0][i]=0;
    for(int i=1;i<=l1;i++)
    for(int j=1;j<=l2;j++)
    {
        if(s1[i-1] == s2[j-1])
        {
            a[i][j]=1+a[i-1][j-1];
        }
        else
        a[i][j]=max(a[i-1][j],a[i][j-1]);
    }
    return a[l1][l2];
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 string s1,s2;
 cin>>s1>>s2;
 int l1=s1.length();
 int l2=s2.length();
 int r=lcs(s1,s2);
 cout<<l1+l2-r<<endl;
 }
	//code
	return 0;
}
