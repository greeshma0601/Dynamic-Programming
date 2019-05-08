/*
Josephus problem
Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle in a fixed direction.​
The task is to choose the safe place in the circle so that when you perform these operations starting from 1st place in the circle, you are the last one remaining and survive.

Input Format:
The first line of input contains an integer T denoting the number of test cases . Then T test cases follow. Each test case contains 2 integers n and k .

Output Format:
For each test case, in a new line, output will be the safe position which satisfies the above condition.

Your Task:
This is a function problem. You are required to complete the function josephus that takes two parameters n and k and returns an integer denoting safe position .

Constraints:
1 <= T <= 100
1 <= k, n <= 20

Example:
Input:
2
3 2
5 3
Output
3
4
*/
#include <bits/stdc++.h>
using namespace std;
int josephus(int n, int k);
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<josephus(n,k)<<endl;
	}
	return 0;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this method */
/*int find_pos(vector<int> &v,int n,int k,int i){
if(v.size()==1)
return v[0];
i=(i+(k-1))%v.size();
v.erase(v.begin()+i);
return find_pos(v,n,k,i);
}

int josephus(int n, int k)
{
vector<int> v;
for(int i=0;i<n;i++) v.push_back(i+1);
return find_pos(v,n,k,0); 

   //Your code here
   vector<int>v1;int i=0;
  int r=find_pos(v1,n,k,i);
  return r;

   
}*/
int josephus(int n, int k)
{
 if (n == 1) 
    return 1; 
  else
    /* The position returned by josephus(n - 1, k) is adjusted because the 
       recursive call josephus(n - 1, k) considers the original position  
       k%n + 1 as position 1 */
    return (josephus(n - 1, k) + k-1) % n + 1;
}
