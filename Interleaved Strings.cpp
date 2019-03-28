/*
Interleaved Strings
Given three strings A, B and C your task is to complete the function isInterleave which returns true if C is an interleaving of A and B else returns false. C is said to be interleaving A and B, if it contains all characters of A and B and order of all characters in individual strings is preserved.

Input:
The first line of input contains an input T denoting the no of test cases. Then T test cases follow. Each test case contains three space separated strings A, B, C.

Output:
For each test case output will be 1 if C is interleaving of string A and B else 0.

Constraints:
1<=T<=100
1<=length of A, B, C <=100

Example(To be used only for expected output):
Input:
2
YX  X  XXY
XY X XXY

Output
0
1

Explanation:
1. For first test case XXY is not interleaving of YX and X
2. For the sec test case XXY is interleaving of XY and X.


*/
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this method */
bool isInterleave(string A, string B, string C) 
{
  // Find lengths of the two strings 
    int M = A.length(), N = B.length(); 
  
    // Let us create a 2D table to store solutions of 
    // subproblems.  C[i][j] will be true if C[0..i+j-1] 
    // is an interleaving of A[0..i-1] and B[0..j-1]. 
    bool IL[M+1][N+1]; 
  
    memset(IL, 0, sizeof(IL)); // Initialize all values as false. 
  
    // C can be an interleaving of A and B only of sum 
    // of lengths of A & B is equal to length of C. 
    if ((M+N) != C.length()) 
       return false; 
  
    // Process all characters of A and B 
    for (int i=0; i<=M; ++i) 
    { 
        for (int j=0; j<=N; ++j) 
        { 
            // two empty strings have an empty string 
            // as interleaving 
            if (i==0 && j==0) 
                IL[i][j] = true; 
  
            // A is empty 
            else if (i==0 && B[j-1]==C[j-1]) 
                IL[i][j] = IL[i][j-1]; 
  
            // B is empty 
            else if (j==0 && A[i-1]==C[i-1]) 
                IL[i][j] = IL[i-1][j]; 
  
            // Current character of C matches with current character of A, 
            // but doesn't match with current character of B 
            else if(A[i-1]==C[i+j-1] && B[j-1]!=C[i+j-1]) 
                IL[i][j] = IL[i-1][j]; 
  
            // Current character of C matches with current character of B, 
            // but doesn't match with current character of A 
            else if (A[i-1]!=C[i+j-1] && B[j-1]==C[i+j-1]) 
                IL[i][j] = IL[i][j-1]; 
  
            // Current character of C matches with that of both A and B 
            else if (A[i-1]==C[i+j-1] && B[j-1]==C[i+j-1]) 
                IL[i][j]=(IL[i-1][j] || IL[i][j-1]) ; 
        } 
    } 
  
    return IL[M][N];
}
