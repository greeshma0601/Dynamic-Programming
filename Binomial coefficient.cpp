/*

Find nCr for given n and r.

Input:
First line contains number of test cases T. T testcases follow. Each testcase contains 1 line of input containing 2 integers n and r separated by a space.

Output:
For each testcase, in a new line, find the nCr. Modulus your output to 109+7.

Constraints:
1 <= T <= 50
1<= n <= 103
1<= r <=800

Example:
Input:
1
3 2
Output:
3

** For More Input/Output Examples Use 'Expected Output' option **

*/
#include<iostream>


using namespace std;
int mod=1000000007;
int ncr(int n,int k){
    int dp[n+1][k+1];
    //for(int i=1;i<n;i++)dp[i][0]=1;
    //for(int i=1;i<k;i++)dp[0][i]=0;
    
    int C[n+1][k+1]; 
    int i, j; 
  
    // Caculate value of Binomial Coefficient in bottom up manner 
    for (i = 0; i <= n; i++) 
    { 
        for (j = 0; j <=k; j++) 
        { 
            // Base Cases 
            if (j == 0 || j == i) 
                C[i][j] = 1; 
            else if(j>i)C[i][j]=0;
  
            // Calculate value using previosly stored values 
            else
                C[i][j] = C[i-1][j-1] + C[i-1][j],C[i][j]%=mod; 
        } 
    } 
  
    return C[n][k]; 
}
int min(int i,int k){
   return (i<k)? i:k;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    cout<<ncr(n,k)<<endl;
	}
	return 0;
}
