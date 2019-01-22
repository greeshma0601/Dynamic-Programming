/*
Edit Distance Submissions: 32205   Accuracy: 33.33%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation   Geeks Classes in Noida More
          
Given two strings str1 and str2 and below operations that can performed on str1. Find minimum number of edits (operations) required to convert ‘str1′ into ‘str2′.

Insert
Remove
Replace
All of the above operations are of cost=1.
Both the strings are of lowercase.

Input:
The First line of the input contains an integer T denoting the number of test cases. Then T test cases follow. Each tese case consists of two lines. The first line of each test case consists of two space separated integers P and Q denoting the length of the strings str1 and str2 respectively. The second line of each test case coantains two space separated strings str1 and str2 in order.


Output:
Corresponding to each test case, pirnt in a new line, the minimum number of operations required.

Constraints:
1<=T<=50
1<= Length(str1) <= 100
1<= Length(str2) <= 100
 

Example:
Input:
1
4 5
geek gesek

Output:
1
*/

#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
int min(int x,int y)
{
    if(x<y)return x;else return y;
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 
 int l1,l2,i,j;
 cin>>l1>>l2;
 string s1,s2;
 cin>>s1>>s2;
 l1=100;
 l2=100;
 l1=s1.length();
 l2=s2.length();
 int t[l1+1][l2+1];
 
 for(i=0;i<=l1;i++)
 for(j=0;j<=l2;j++)
 {
  if(i==0  ||j==0 )
  {t[i][j]=max(i,j);}
    else
    {
        if(s1[i-1]==s2[j-1])
        t[i][j]=t[i-1][j-1];
        else
        t[i][j]=min(t[i-1][j-1],min(t[i-1][j],t[i][j-1]))+1;
    }
     
 }
 cout<<t[l1][l2]<<endl;
 
 }
	//code
	return 0;
}
