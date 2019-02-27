/*
Egg Dropping Puzzle Submissions: 16920   Accuracy: 41.45%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation   Sudo Placement [IITs]
                                      
Suppose you have N eggs and you want to determine from which floor in a K-floor building you can drop an egg such that it doesn't break. You have to determine the minimum number of attempts you need in order find the critical floor in the worst case while using the best strategy.There are few rules given below. 

An egg that survives a fall can be used again.
A broken egg must be discarded.
The effect of a fall is the same for all eggs.
If the egg doesn't break at a certain floor, it will not break at any floor below.
If the eggs breaks at a certain floor, it will break at any floor above.
For more description on this problem see wiki page

Input:
The first line of input is  T denoting the number of testcases.Then each of the T lines contains two positive integer N and K where 'N' is the number of eggs and 'K' is number of floor in building.

Output:
For each test case, print a single line containing one integer the minimum number of attempt you need in order find the critical floor.

Constraints:
1<=T<=30
1<=N<=10
1<=K<=50


Example:
Input:
1
2 10

Output:
4
*/

#include<bits/stdc++.h>
using namespace std;
int eggdroping(int eggs,int floors){
    int dp[eggs+1][floors+1];
    for(int i=0;i<=floors;i++)
        dp[0][i]=0,dp[1][i]=i;
    for(int i=0;i<=eggs;i++)
        dp[i][0]=0;
    for(int i=2;i<eggs+1;i++){
        for(int j=1;j<floors+1;j++){
            dp[i][j]=INT_MAX;
            for(int k=1;k<=j;k++){
                int c=1+max(dp[i-1][k-1],dp[i][j-k]);
                dp[i][j]=min(dp[i][j],c);
            }
        }
    }

//uncomment the below to see the dp table
    /*for(int i=0;i<=eggs;i++){
        for(int j=0;j<=floors;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return dp[eggs][floors];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int eggs,floors;
        cin>>eggs>>floors;
        cout<<eggdroping(eggs,floors)<<endl;
    }
}
