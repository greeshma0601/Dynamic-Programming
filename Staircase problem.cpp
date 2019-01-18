/*
Count ways to reach the n'th stair Submissions: 17156   Accuracy: 30.61%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation   Geeks Classes in Noida More
        
There are N stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does matter).

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, an integer N will be given.

Output:
For each testcase, in a new line, print number of possible ways to reach Nth stair. Answer your output % 10^9+7.

Constraints:
1<=T<=105
1<=N<=105

Example:
Input:
3
4
10
24
Output:
5
89
75025


*/


#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
long long int m=pow(10,9)+7;
//long long int a[100001];
/*long long int fib(int n) 
{
    double phi=(sqrt(5)+1)/2;
    long long int a= round(pow(phi,n)/(sqrt(5)));
    //return a%(1000000007);
}*/
/*void fib() 
{*/ 
    
    
   // return a[n];
//} 
  
int main()
 {
 int t;
 cin>>t;
long long int a[100001];
a[0]=1;
    a[1]=1;
    for(int i=2;i<=100000;i++)
    {
        a[i]=(a[i-1]%m+a[i-2]%m)%m;
    }
 while(t--)
 {
 int n;
 cin>>n;
 cout<<a[n]<<endl;
 }
	//code
	return 0;
}

/*#include <iostream>
#include<math.h>
using namespace std;
long long int m=pow(10,9)+7;
int main() {
	//code
	int t;cin>>t;
	long long int arr[100000];
	    arr[0]=1;arr[1]=1;
	    for(int i=2;i<=100000;i++)
	    {
	        arr[i]=(arr[i-1]%m+arr[i-2]%m)%m;
	    }
	while(t--)
	{
	    int n;cin>>n;
	    cout<<arr[n]<<"\n";
	}
	return 0;
}*/
