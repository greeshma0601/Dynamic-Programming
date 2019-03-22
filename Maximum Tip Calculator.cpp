/*
Maximum Tip Calculator
Rahul and Ankit are the only two waiters in Royal Restaurant. Today, the restaurant received N orders. The amount of tips may differ when handled by different waiters, if Rahul takes the ith order, he would be tipped Ai rupees and if Ankit takes this order, the tip would be Bi rupees.
In order to maximize the total tip value they decided to distribute the order among themselves. One order will be handled by one person only. Also, due to time constraints Rahul cannot take more than X orders and Ankit cannot take more than Y orders. It is guaranteed that X + Y is greater than or equal to N, which means that all the orders can be handled by either Rahul or Ankit. Find out the maximum possible amount of total tip money after processing all the orders.


Input:

•    The first line contains one integer, number of test cases.
•    The second line contains three integers N, X, Y.
•    The third line contains N integers. The ith integer represents Ai.
•    The fourth line contains N integers. The ith integer represents Bi.

 

Output:
Print a single integer representing the maximum tip money they would receive.
 

Constraints:
1 ≤ N ≤ 105
1 ≤ X, Y ≤ N; X + Y ≥ N
1 ≤ Ai, Bi ≤ 104

 

Example:

Input:

2
5 3 3
1 2 3 4 5
5 4 3 2 1
8 4 4
1 4 3 2 7 5 9 6 
1 2 3 6 5 4 9 8

 

Output:

21
43
*/

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
return (abs(a.first-a.second)>abs(b.first-b.second));
}
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 //int n,i;cin>>n;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 int n,x,y,i;int sum=0;
 cin>>n>>x>>y;
 vector<pair<int,int>>v(n);
 for(i=0;i<n;i++)
 cin>>v[i].first;
 for(i=0;i<n;i++)
 cin>>v[i].second;
 sort(v.begin(),v.end(),comp);
 for(i=0;i<n;i++)
 {
    if(y == 0 || (x>0) && v[i].first>=v[i].second)
     {
         sum+=v[i].first;
         x--;
         
     }
     else 
     {
         sum+=v[i].second;
         y--;
     }
 }
 cout<<sum<<endl;
 }
	//code
	return 0;
}
