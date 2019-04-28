/*
Paths to reach origin Submissions: 3490   Accuracy: 60.09%   Difficulty: Easy   Marks: 2
       
Problems
You are standing on a point (n, m) and you want to go to origin (0, 0) by taking steps either left or down i.e. from each point you are allowed to move either in (n-1, m) or (n, m-1). Find the number of paths from point to origin.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two integers n and m representing the point.

Output:
For each testcase, in a new line, print the total number of paths from point to origin.

Constraints:
1 <= T<= 100
1 <= n, m <= 25

Example:
Input:
3
3 2
3 6
3 0

Output:
10
84
1
*/
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define inf INT_MAX 
using namespace std;
int no_of_paths(int n,int m,int dp[101][101])
{
    if(n == 0 && m == 0) return 1;
    if(n < 0 || m < 0) return 0;
    dp[n][m] = no_of_paths(n-1,m,dp) + no_of_paths(n,m-1,dp);
    return dp[n][m];
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int dp[101][101] = {};
        int ans = no_of_paths(n,m,dp);
        cout << ans << endl;
    }
    return 0;
}
