/*
Sum of all substrings of a number Submissions: 3702   Accuracy: 52.79%   Difficulty: Easy   Marks: 2
Associated Course(s):   Geeks Classes DSA
     
Problems
Given an integer represented as a string, we need to get the sum of all possible sub-strings of this string.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains a string S that represents a number..

Output:
For each test case, in a new line, print the required result.

Constraints:
1 <= T <= 100
1 <= S <= 1012

Example:
Input:
2
1234
421
Output:
1670
491

Explanation:
Testcase1:
Input  : N = “1234”
Output : 1670
Sum = 1 + 2 + 3 + 4 + 12 + 23 +
       34 + 123 + 234 + 1234
    = 1670
Testcase2:
Input  : N = “421”
Output : 491
Sum = 4 + 2 + 1 + 42 + 21 + 421
    = 491
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
ll int toDigit(char ch) 
{ 
    return (ch - '0'); 
} 
// Returns sum of all substring of num 
ll int sumOfSubstrings(string num) 
{ 
   ll int n = num.length(); 
  
    //  allocate memory equal to length of string 
    ll int sumofdigit[n]; 
  
    //  initialize first value with first digit 
    sumofdigit[0] = toDigit(num[0]); 
    ll int res = sumofdigit[0]; 
  
    //  loop over all digits of string 
    for (ll int i=1; i<n; i++) 
    { 
        ll int numi = toDigit(num[i]); 
  
        // update each sumofdigit from previous value 
        sumofdigit[i] = (i+1) * numi + 
                        10 * sumofdigit[i-1]; 
  
        // add current value to the result 
        res += sumofdigit[i]; 
    } 
  
    return res; 
} 
  
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
     string s;cin>>s;cout<<sumOfSubstrings(s)<<endl; 
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 }
	//code
	return 0;
}
