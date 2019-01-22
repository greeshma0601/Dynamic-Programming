/*
Longest Common Subsequence Submissions: 43404   Accuracy: 33.33%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation   Geeks Classes in Noida More
                
Given two sequences, find the length of longest subsequence present in both of them. Both the strings are of uppercase.

Input:
First line of the input contains no of test cases  T,the T test cases follow.
Each test case consist of 2 space separated integers A and B denoting the size of string str1 and str2 respectively
The next two lines contains the 2 string str1 and str2 .

Output:
For each test case print the length of longest  common subsequence of the two strings .

Constraints:
1<=T<=200
1<=size(str1),size(str2)<=100

Example:
Input:
2
6 6
ABCDGH
AEDFHR
3 2
ABC
AC

Output:
3
2

Explanation
LCS for input Sequences “ABCDGH” and “AEDFHR” is “ADH” of length 3.

LCS of "ABC" and "AC" is "AC" of length 2

*/

#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
     int i,j,n1,n2;
     cin>>n2>>n2;
 string s1,s2;
 cin>>s1>>s2;
 n1=100;
 n2=100;
 n1=s1.length();
 n2=s2.length();
 int ls[n1+1][n2+1];
 //s1[n1]=s1[n2]=
 for(i=0;i<=n1;i++)
 ls[i][0]=0;
 for(j=0;j<=n2;j++)
 ls[0][j]=0;
 for(i=1;i<=n1;i++)
 for(j=1;j<=n2;j++)
 {
     if(s1[i-1]==s2[j-1])
     {ls[i][j]=ls[i-1][j-1]+1;}
     else
     {
         ls[i][j]=max(ls[i-1][j],ls[i][j-1]);
     }
 }
 cout<<ls[n1][n2]<<endl;
 }
	//code
	return 0;
}
