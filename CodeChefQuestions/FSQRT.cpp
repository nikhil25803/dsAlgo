// Input
// The first line of the input contains an integer T, the number of test cases. T lines follow. Each line contains an integer N whose square root needs to be computed.
//
// Output
// For each line of the input, output the square root of the input integer, rounded down to the nearest integer, in a new line.
//
// Constraints
// 1<=T<=20
// 1<=N<=10000
// Input:
// 3
// 10
// 5
// 10000
//
// Output:
// 3
// 2
// 100


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,ans;
	    cin>>n;
	    cout<<(int) sqrt(n)<<endl;

	}
	return 0;
}
