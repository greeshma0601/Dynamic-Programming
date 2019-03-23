/*
Possible words from Phone digits Submissions: 8418   Accuracy: 38.17%   Difficulty: Medium   Marks: 4
Associated Course(s):   Interview Preparation   Geeks Classes in Noida   Geeks Classes DSA Less
             
Problems
Discussions
Given a keypad as shown in diagram, and an N digit number. List all words which are possible by pressing these numbers.



Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains two lines of input. The first line of each test case is N, N is the number of digits. The second line of each test case contains D[i], N number of digits.

Output:
Print all possible words from phone digits with single space.

Constraints:
1 <= T <= 10
1 <= N <= 10
2 <=  D[i] <= 9

Example:
Input:
1
3
2 3 4

Output:
adg adh adi aeg aeh aei afg afh afi bdg bdh bdi beg beh bei bfg bfh bfi cdg cdh cdi ceg ceh cei cfg cfh cfi

*/

#include<iostream>
using namespace std;
string s[]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(int arr[],int n,string nstr)
{
    if(n==0)
    {
        cout<<nstr<<" ";
        return;
    }
    int i=arr[0];
    for(int j=0;j<s[i][j]!='\0';j++)
    {
        
        keypad(arr+1,n-1,nstr+s[i][j]);
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
	    int arr[1000];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    string str="";
	    keypad(arr,n,str);
	    cout<<endl;
	    
	}
	return 0;
}
