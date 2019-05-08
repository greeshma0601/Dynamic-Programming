/*
Finding Position Submissions: 8392   Accuracy: 57.7%   Difficulty: Easy   Marks: 2
         
Problems
Some people are standing in a queue. A selection process follows a rule where people standing on even positions are selected. Of the selected people a queue is formed and again out of these only people on even position are selected. This continues until we are left with one person. Find out the position of that person in the original queue.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N,number of people standing in a queue.

Output:

Print the position(original queue) of that person who is left.

Constraints:

1 ≤ T ≤ 1000
1 ≤ N ≤ 100000000

Example:

Input
1
5

Output
4
*/

/*
Recursive code:
#include<iostream>
#include<math.h>
using namespace std;
int number_position(int n, int power){
    int position;
	if(n==1){
        int position = (int) pow(2,power);
        return position;
    }
    else{
        if(n%2){
            //// Odd Number
            n = (n-1)/2;
            power++;
            position = number_position(n,power); 
            
        }
        else{
            /// Even Number
            n = n/2;
            power++;
        	position = number_position(n,power);
		}
    }
    return position;
}


int main()
 {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int result;
	    int power=0;
	    result = number_position(n,power);
	    cout << result << endl;
	}
	return 0;
}
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int highestPowerof2(int n) 
{ 
   int p = (int)log2(n); 
   return (int)pow(2, p);  
} 
int main()
 {
 int t;
 cin>>t;
 while(t--)
 {
 int n,i;cin>>n;
 cout<<highestPowerof2(n)<<endl;
 //int a[n];for(i=0;i<n;i++)cin>>a[i];
 }
	//code
	return 0;
}
