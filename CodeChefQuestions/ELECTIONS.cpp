// There are 101 citizens in Chefland. It is election time in Chefland and 3 parties, A,B, and C are contesting the elections. 
// Party A receives XA votes, party B receives XB votes, and party C receives XC votes.

// The constitution of Chefland requires a particular party to receive a clear majority to form the government. 
// A party is said to have a clear majority if it receives strictly greater than 50 votes.

// If any party has a clear majority, print the winning party (A, B or C). Otherwise, print NOTA.

// Input Format
// The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains 3 space-separated integers — XA, XB, and XC.
// Output Format
// For each test case, if any party has a clear majority, print the winning party (A, B or C). Otherwise, print NOTA.

// You can print each letter of the string in any case (upper or lower) 
// (for instance, strings Nota, nOtA and notA will be considered identical).

// Constraints
// 1≤T≤500
// 0≤XA,XB,XC≤101
// XA+XB+XC=101
// 
// Sample Input 1 
// 3
// 80 19 2
// 20 55 26
// 50 1 50
// 
// Sample Output 1 
// A
// B
// NOTA
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int arr[3];
	    for(int i=0;i<3;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    if(arr[0]>50)
	    {
	        cout<<"A"<<endl;
	    }
	    else if(arr[1]>50)
	    {
	        cout<<"B"<<endl;
	    }
	    else if(arr[2]>50)
	    {
	        cout<<"C"<<endl;
	    }
	    else
	    {
	        cout<<"NOTA"<<endl;
	    }
	    
	    
	    
	}
	return 0;
}
