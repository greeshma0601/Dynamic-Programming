/*
Ritika's Money Submissions: 464   Accuracy: 12.44%   Difficulty: Easy   Marks: 2
   
Problems
Ritika has a coin of  $N but she is the type of person who loves to have as much money as possible. A coin of $N can be exchanged in a bank into three coins of: $n/2, $n/3 and $n/4. But these numbers are all rounded down. Ritika decides to exchange her coin in the greed of money and makes profit. Your task is to find the maximum amout of money she can have at the end of exchange.

Note: Ritika will not exchange her money if the amount she get back after exchange is less than or same as of her current amount. 

Input:

First line of the input contains an integer T denoting the number of test cases. Each testcase contains a single line with a number N. 
Output:

For each test case output a single line, containing the maximum amount of money Riitika can make.
Constraints:

1<=T<=100

0 <= N<= 1 000 000 000
Example:

Input:

2

5

12

Output:

5

13

Explanation:

For First testcase: 5=>5/2+5/3+5/4=2+1+1=4<5 which means 5 can't be exchanged to earn profit so it itself is the maximum amount .

For second testcase :12=>12/2+12/3+12/4=6+4+3=13 (>12)after exchange.Now 6,4,3 can't be exchanged further to get profit.
*/
#include <iostream>
#include <unordered_map>
using namespace std;
typedef long long ll;
unordered_map<ll,ll> um;
ll sum(ll n){
    if(n<=11)
        return n;
    if(um.find(n)==um.end())
     um[n]=sum(n/2)+sum(n/3)+sum(n/4);
    else
     return um[n];
    
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	   
	    printf("%lld\n",sum(n));
	}
	return 0;
}
