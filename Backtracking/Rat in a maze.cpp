/*
Rat in a Maze Problem Submissions: 12405   Accuracy: 37.6%   Difficulty: Medium   Marks: 4
                          
Problems
Consider a rat placed at (0, 0) in a square matrix m[][] of order n and has to reach the destination at (n-1, n-1). Your task is to complete the function which returns a sorted array of strings denoting all the possible directions which the rat can take to reach the destination at (n-1, n-1). The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right).

For example
1 0 0 0
1 1 0 1
1 1 0 0
0 1 1 1

For the above matrix the rat can reach the destination at (3, 3) from (0, 0) by two paths ie DRDDRR and DDRDRR when printed in sorted order we get DDRDRR DRDDRR.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains two lines. The first line contains an integer n denoting the size of the square matrix. The next line contains n*n space separated values of the matrix m where 0's represents blocked paths and 1 represent valid paths.

Output:
For each test case output will be space separated sorted strings denoting all directions, which the rat could take to reach the destination.

Constraints:
1<=T<=10
2<=n<=10
0<=m[][]<=1

Example(To be used only for expected output):
Input:
2
4
1 0 0 0 1 1 0 1 0 1 0 0 0 1 1 1
4
1 0 0 0 1 1 0 1 1 1 0 0 0 1 1 1

Output:
DRDDRR
DDRDRR DRDDRR 
 
*/
bool safe(int m[MAX][MAX],int n,int x,int y){
    if(x>=0 && y>=0 && x<n && y<n && m[x][y]==1){
        return true;
    }
    return false;
}
void util(int m[MAX][MAX], int n,int x,int y,vector<string>&ans,string cur){
    if(x==n-1&&y==n-1){
        ans.push_back(cur);
        return;
    }
    if(safe(m,n,x,y)==true){
        m[x][y]=-1;
        util(m,n,x+1,y,ans,cur+"D");
        util(m,n,x-1,y,ans,cur+"U");
        util(m,n,x,y-1,ans,cur+"L");
        util(m,n,x,y+1,ans,cur+"R");
        m[x][y]=1;
    }
}
vector<string> printPath(int m[MAX][MAX], int n)
{
    //Your code here
    vector<string>ans;
    string cur="";
    int x=0,y=0;
    util(m,n,x,y,ans,cur);
    sort(ans.begin(),ans.end());
    return ans;
}
