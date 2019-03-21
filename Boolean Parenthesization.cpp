/*
Boolean Parenthesization Submissions: 4141   Accuracy: 26.12%   Difficulty: Hard   Marks: 8
         
Problems
Discussions
Given a boolean expression with following symbols.

Symbols
    'T' ---> true
    'F' ---> false

And following operators filled between symbols

Operators
    &   ---> boolean AND
    |   ---> boolean OR
    ^   ---> boolean XOR

Count the number of ways we can parenthesize the expression so that the value of expression evaluates to true.

For Example:
The expression is "T | T & F ^ T", it evaluates true
in 4 ways ((T|T)&(F^T)), (T|(T&(F^T))), (((T|T)&F)^T)
and (T|((T&F)^T)).

Return No_of_ways Mod 1003.

Input:
First line contains the test cases T.  1<=T<=500
Each test case have two lines
First is length of string N.  1<=N<=100
Second line is string S (boolean expression).
Output:
No of ways Mod 1003.
 

Example:
Input:
2
7
T|T&F^T
5
T^F|F

Output:
4
2
*/
#include<iostream>
using namespace std;
long long int cnttrue(string A) {
    int n=A.length();
    string s="",o="";
    for(int i=0;A[i]!='\0';++i){
        if(A[i]=='T'||A[i]=='F')
            s+=A[i];
        else
            o+=A[i];
    }
    //cout<<o<<endl<<s;
    n=s.length();
    long long int tr[n][n];
    long long int fa[n][n];
    
    for(int i=0;i<n;++i){
        if(s[i]=='T'){
            tr[i][i]=1;
            fa[i][i]=0;
        }
        else{
            tr[i][i]=0;
            fa[i][i]=1;
        }
    }
    for(int gap=1;gap<n;++gap){
        for (int i=0, j=gap; j<n; ++i, ++j) 
        { tr[i][j]=fa[i][j]=0;
            for (int g=0; g<gap; g++) 
            { 
                // Find place of parenthesization using current value 
                // of gap 
                int k = i + g;
                long long int tik=(tr[i][k]+fa[i][k]);
                long long int tkj=(tr[k+1][j]+fa[k+1][j]);
                if(o[k]=='&'){
                    tr[i][j]+=(tr[i][k]*tr[k+1][j]);
                    fa[i][j]+=(tik*tkj-tr[i][k]*tr[k+1][j]);
                }
                else if(o[k]=='|'){
                    tr[i][j]+=(tik*tkj-fa[i][k]*fa[k+1][j]);
                    fa[i][j]+=(fa[i][k]*fa[k+1][j]);
                }
                else if(o[k]=='^'){
                    tr[i][j]+=(fa[i][k]*tr[k+1][j]+tr[i][k]*fa[k+1][j]);
                    fa[i][j]+=(fa[i][k]*fa[k+1][j]+tr[i][k]*tr[k+1][j]);
                }
            }
        }
    }
    return tr[0][n-1]%1003;
    
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    cout<<cnttrue(s)<<endl;
	}
	return 0;
}
