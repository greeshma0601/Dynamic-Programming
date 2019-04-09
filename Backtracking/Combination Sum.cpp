/*

Combination Sum Submissions: 9752   Accuracy: 25.8%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation
             
Problems
Given an array of integers A and a sum B, find all unique combinations in A where the sum is equal to B. The same repeated number may be chosen from A unlimited number of times.
Note:
All numbers will be positive integers.
Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
The combinations themselves must be sorted in ascending order.
If there is no combination possible the print "Empty" (without qoutes).
Example,
Given A = 2,4,6,8 and B(sum) = 8,
A solution set is:

[2, 2, 2, 2]
[2, 2, 4]
[2, 6]
[4, 4]
[8]

Input:
First is T , no of test cases. 1<=T<=500
Every test case has three lines.
First line is N, size of array. 1<=N<=12
Second line contains N space seperated integers(x). 1<=x<=9.
Third line is the sum B. 1<=B<=30.
 
Output:
One line per test case, every subset enclosed in () and in every set intergers should be space seperated.(See example)

Example:
Input:
3
4
7 2 6 5
16
11
6 5 7 1 8 2 9 9 7 7 9
6
4
5 2 2 6
3

Output:
(2 2 2 2 2 2 2 2)(2 2 2 2 2 6)(2 2 2 5 5)(2 2 5 7)(2 2 6 6)(2 7 7)(5 5 6)
(1 1 1 1 1 1)(1 1 1 1 2)(1 1 2 2)(1 5)(2 2 2)(6)
Empty



*/

#include <bits/stdc++.h>
using namespace std;

void print(vector <int> q)
{cout<<"(";
    for(int i=0;i<q.size()-1;i++)
    cout<<q[i]<<" ";
    cout<<q[q.size()-1]<<")";
   
}
void sum(vector <int> v,vector <int> q,int k,int s,int j,bool &r)
{
    if(s==k)
    { r=true;
        print(q);
        return;
    }
    for(int i=j;i<v.size();i++)
    {
        if(s>k)
        return;
        
        q.push_back(v[i]);
        
        sum(v,q,k,s+v[i],j,r);
        j++;
        if(q.size()==0)
        return;
        q.pop_back();
        
    }
    
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector <int> v;
	    set<int> w;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        w.insert(x);
	       
	    }
	    set <int> ::iterator it=w.begin();
	    while(it!=w.end())
	    {
	        v.push_back(*it);
	        it++;
	    }
	    int k;
	    cin>>k;
	    vector <int> q;
	    sort(v.begin(),v.end());
	    int s=0;
	    int j=0;
	    bool r=false;
	    sum(v,q,k,s,j,r);
	    if(!r)
	    cout<<"Empty";
	    cout<<endl;
	    
	}
	return 0;
}
