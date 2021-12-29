#include <iostream>
using namespace std;


int main()
{
  int arr1[5],arr2[5],n,i,sum[5];

  cout<<"Enter the elements of the first array: "<<endl;
  for(i=0;i<n;i++)
  {
    cin>>arr1[i];
  }
  cout<<"\nFirst array is: "<<endl;
  for(i=0;i<n;i++)
  {
    cout<<arr1[i]<<" ";
  }

  cout<<"\nEnter the element of second array: "<<endl;
  for(i=0;i<n;i++)
  {
    cin>>arr2[i];
  }
  cout<<"\nSecond array is: "<<endl;
  for(i=0;i<n;i++)
  {
    cout<<arr2[i]<<" ";
  }

  cout<<"\nSum of array is: "<<endl;
  for(i=0;i<n;i++)
  {
    sum[i]=arr1[i]+arr2[2];
  }

  for(i=0;i<n;i++)
  {
    cout<<sum[i]<<" ";
  }

  return 0;
}
