/*
Path in Matrix Submissions: 13244   Accuracy: 42.91%   Difficulty: Medium   Marks: 4
Associated Course(s):   Geeks Classes in Noida   Geeks Classes in Noida
         
Given a N X N  matrix Matrix[N][N] of positive integers.  There are only three possible moves from a cell Matrix[r][c].

1. Matrix[r+1][c]

2. Matrix[r+1][c-1]

3. Matrix[r+1][c+1]

Starting from any column in row 0, return the largest sum of any of the paths up to row N-1.

Input:
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N denoting the order of matrix. Next line contains N*N integers denoting the elements of the matrix in row-major form.

Output:
Output the largest sum of any of the paths starting from any cell of row 0 to any cell of row N-1. Print the output of each test case in a new line.

Constraints:
1<=T<=20
2<=N<=20
1<=Matrix[i][j]<=1000 (for all 1<=i<=N && 1<=j<=N)

Example:

Input:
1
2
348 391 618 193

Output:
1009

Explanation: In the sample test case, the path leading to maximum possible sum is 391->618.  (391 + 618 = 1009)


*/


#include <iostream>
using namespace std;
int max(int a, int b)
{
    if(a>b) return a;
    else return b;
}
int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int a[n][n];
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                cin>>a[j][k];
            }
        }
        int cost[n+1][n+1];
        for(int j=0; j<=n; j++)
        {
            for(int k=0; k<=n; k++)
            {
                if(j==0 || k==0) cost[j][k]=0;
                else if(k!=n) cost[j][k]=a[j-1][k-1]+max(max(cost[j-1][k],cost[j-1][k-1]),cost[j-1][k+1]);
                else cost[j][k]=a[j-1][k-1]+max(cost[j-1][k],cost[j-1][k-1]);
            }   
        }
        int maximum=-9999;
        for(int k=0;k<=n;k++)
        {
            if(cost[n][k] > maximum) maximum=cost[n][k];
        }
        cout<<maximum<<endl;
        
    }
    
    return 0;
}
