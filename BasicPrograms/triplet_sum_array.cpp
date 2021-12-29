#include <iostream>
using namespace std;


int main()
{
  int n,i,j,k;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n;

  int arr[n];
  for(i=0;i<n;i++)
  {
    cout<<"Enter the "<<i<<" index element of the array: ";
    cin>>arr[i];
  }
  //Printing the array
  cout<<"The array is: "<<endl;
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

  int sum;
  cout<<"\nEnter the number: ";
  cin>>sum;

  //Checking triplet sum count
  int count=0;
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      for(k=j+1;k<n;k++)
      {
        if(arr[i]+arr[j]+arr[k]==sum)
        {
          count++;
        }
      }
    }
  }
  cout<<"Number of triplet whoose sum is equal to "<<sum<<" is: "<<count<<endl;



  return 0;
}
