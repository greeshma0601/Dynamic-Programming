/*
Tom and Jerry
Since very long time Tom and Jerry have been fighting with each other for a piece of Cheese. So finally you came to rescue and decided that the result of the fight will be decided by a mathematical game , in which you will write a number N . Tom and Jerry will play the game alternatively and each of them would subtract a number n [n< N] such that N%n=0. 
The game is repeated turn by turn until the one,who now cannot make a further move looses the game. 
The game begins with Tom playing first move.It is well understood that both of them will make moves in optimal way.You are to determine who wins the game.

Input

The first line of input contains a single integer T denoting the number of test cases.
Then T test cases follow. The first line of each test case consists of N the number.

Output

Print 1 if Tom wins and Print 0 if Jerry wins in a separate line.

Constraints

1<= T<=100 

1 <= N <= 10^6

Sample Input

2 
2 
4

Sample Output

1 
1

 
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int n;cin>>n;
 cout<<(n-1)%2<<endl;
 }
	//code
	return 0;
}
