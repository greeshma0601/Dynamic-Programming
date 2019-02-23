/*
Longest Common Substring Submissions: 19370   Accuracy: 35.96%   Difficulty: Medium   Marks: 4
Associated Course(s):   Sudo Placement [IITs]
         
Given two strings X and Y. The task is to find the length of the longest common substring.

Input:
First line of the input contains number of test cases T. Each test case consist of three lines, first of which contains 2 space separated integers N and M denoting the size of string X and Y strings respectively. The next two lines contains the string X and Y.

Output:
For each test case print the length of longest  common substring of the two strings .

Constraints:
1 <= T <= 200
1 <= N, M <= 100

Example:
Input:
2
6 6
ABCDGH
ACDGHR
3 2
ABC
AC

Output:
4
1

Example:
Testcase 1: CDGH is the longest substring present in both of the strings. Submissions: 19370   Accuracy: 35.96%   Difficulty: Medium   Marks: 4
Associated Course(s):   Sudo Placement [IITs]
         
Given two strings X and Y. The task is to find the length of the longest common substring.

Input:
First line of the input contains number of test cases T. Each test case consist of three lines, first of which contains 2 space separated integers N and M denoting the size of string X and Y strings respectively. The next two lines contains the string X and Y.

Output:
For each test case print the length of longest  common substring of the two strings .

Constraints:
1 <= T <= 200
1 <= N, M <= 100

Example:
Input:
2
6 6
ABCDGH
ACDGHR
3 2
ABC
AC

Output:
4
1

Example:
Testcase 1: CDGH is the longest substring present in both of the strings.

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int max(int a,int b)
{
    return a>b ?a:b;
}
int lps(string s1,string s2)
{
    int l1=s1.length();
    int l2=s2.length();
    int t[l1+1][l2+1];
    
     
int res=0;
     for(int i=0;i<=l1;i++)
     {
     for(int j=0;j<=l2;j++)
     {
        if(i == 0 || j==0)
        {
            t[i][j]=0;
        }
        else if(s1[i-1] == s2[j-1])
         {
             t[i][j]=1+t[i-1][j-1];
             res=max(t[i][j],res);
            
             
         }
         else t[i][j]=0;
         
     }
    
     }
     return res;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
     int l1,l2;
     cin>>l1>>l2;
     string s1,s2;
     cin>>s1>>s2;
  
     cout<<lps(s1,s2)<<endl;
 }
	//code
	return 0;
}
