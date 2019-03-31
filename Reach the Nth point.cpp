/*
Reach the Nth point Submissions: 11559   Accuracy: 38.55%   Difficulty: Easy   Marks: 2
           
Problems
There are N points on the road ,you can step ahead by 1 or 2 . Find the number of ways you can reach at point N. For example:  for N=4 we have 5 possible ways [1,1,1,1]  [1,1,2]  [1,2,1]  [2,1,1]  [2 2].

Input:
The first line of input contains an integer T denoting the number of test cases. Next line of each input contains a single integer N.

Output:
For each testcase, in a new line, print the number of ways.

Constraints:
1<=T<=100
1<=N<=90

Example:
Input:
2
4
5

Output:
5
8
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define lim ((ll)(1e2)+5)
#define F first
#define S second
#define D double
#define mod ((ll)(1e9)+7)
#define pq priority_queue
#define vl vector<ll>
#define pll pair<ll,ll>
#define vll vector<pll>
#define inf ((ll)(1e17)+7)
ll zero=0;
ll one=1;

int main()
{
ll t,temp;
scanf("%lld",&t);


while(t--)
{
    ll n;
    scanf("%lld",&n);
    ll a,b;
    a=1;
    b=2;
    if(n>2)
    {
    for(ll i=0;i<n-2;i++)
    {
        temp=a;
        a=b;
        b=temp+b;
    }
    printf("%lld\n",b);
    }
    else
    printf("%lld\n",n);
}
return 0;}
