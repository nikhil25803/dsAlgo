#include <iostream>
using namespace std;

void elem(int arr[], int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}

int main() {
	// your code goes here

	    int k;
      cin>>k;
	    int A[3]={4,2,1};
	    int S[3];
	   // int a1=A[0];
     // elem(A,3);
	    for(int i=0;i<3;i++)
	    {
	        int sum=0;
	        while(i>=0)
	        {
	            sum+=A[i];
              i--;
	        }
          S[i]=sum;
	    }
      elem(S,3);

	    int S2[3];
	    for(int i=0;i<3;i++)
	    {
	        S2[i]=S[i]+A[i];
	    }

	    int count=0;
	    for(int i=0;i<3;i++)
	    {
	        if(S2[i]==k)
	        {
	            count++;
	        }
	    }

	    if(count>0)
	    {
	        cout<<count<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }

	return 0;
}
