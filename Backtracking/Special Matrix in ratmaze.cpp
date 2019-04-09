/*
Special Matrix Submissions: 6254   Accuracy: 23.46%   Difficulty: Medium   Marks: 4
    
Problems
You are given a matrix having N rows and M columns. The special property of this matrix is that some of the cells of this matrix are blocked
i.e. they cannot be reached. Now you have to start from the cell (1,1) and reach the end (N,M) provided during the journey you can move horizontally right from the current cell or vertically down from the current cell.
Can you answer the number of ways you can traverse the matrix obeying the above constraints starting from (1,1) and ending at (N,M).

Output your answer modulo 10^9+7.
 

Input :
The first line contains T, the number of test cases. Then T test cases follow.
Each test case consists of two lines.
The first line contains  three integers N,M and K denoting the number of rows, the number of columns and the number of blocked cells in the matrix respectively. The next line contains space separated 2*K integers denoting the positions of the blocked cells in the form R1 C1 R2 C2 R3 C3…..RK CK.
 

Output :
For each test case output the the number of ways modulo 10^9+7 in a new line.
 

Constraints :
1<=T<=100
1<=N<=1000
1<=M<=1000
1<=K<N*M
1<=Ri<=N
1<=Ci<=M
It is guaranteed that the cell (1,1) will never be blocked.
 

Example
Input 
1
3 3 2
1 2 3 2
Output :   
1
 

Explanation :
For the above test case there is only one path from (1,1) to(3,3) which is
(1,1)->(2,1)->(2,2)->(2,3)->(3,3)

*/


#include <iostream>
#include <cmath>
using namespace std;

int numberOfPaths(int ar[1000][1000],int m, int n)
{

int count[m][n];
int flag=true;

for (int i = 0; i < m; i++){
if(ar[i][0]==0||flag==false){
count[i][0]=0;flag=false;}
else if(flag)count[i][0] = 1;

}
flag=true;
for (int j = 0; j < n; j++){
if(ar[0][j]==0||flag==false){
count[0][j]=0;flag=false;}
else if(flag)count[0][j] = 1;
}
for (int i = 1; i < m; i++)
{
for (int j = 1; j < n; j++)
if(ar[i][j]==0)count[i][j]=0;
else
count[i][j] = (count[i-1][j] + count[i][j-1])%1000000007; 
}
return count[m-1][n-1];
}
int main() {
int t;cin>>t;
while(t){
int r,c;cin>>r>>c;
int n;cin>>n;
int ar[1000][1000];
for(int i=0;i<r;i++){ for(int j=0;j<c;j++){ ar[i][j]=1; } } for(int i=0;i<2*n;i=i+2){ int a,b;cin>>a>>b;
ar[a-1][b-1]=0;
}
int res=numberOfPaths(ar,r,c);
cout<<res<<endl; t--; }return 0; }
