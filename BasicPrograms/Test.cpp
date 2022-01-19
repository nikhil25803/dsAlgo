#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int sa,sb,sc;
	    int arr[3];
	    for(int i=0;i<3;i++)
	    {
	        cin>>arr[i];
	    }
	    int min =arr[0];
	    for(int i=0;i<3;i++)
	    {
	        if(arr[i]<min)
	        {
	            min=arr[i];
	        }
	    }
      cout<<min<<endl;

	    if(min==arr[2])
	    {
	        cout<<"Alice"<<endl;
	    }

	    else if(min==arr[1])
	    {
	        cout<<"Bob"<<endl;
	    }
	    else
	    {
	        cout<<"Draw"<<endl;
	    }
	}
	return 0;
}
