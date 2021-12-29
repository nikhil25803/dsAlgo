#include <iostream>
using namespace std;

int main()
{
  int n,i,j,temp;
  cout<<"Enter the size of the array: "<<endl;
  cin>>n;

  int arr[n];
  for(i=0;i<n;i++)
  {
    cout<<"Enter the "<<i+1<<" th element ";
    cin>>arr[i];
  }

  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(arr[i]>arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

      }
    }
  }

  cout<<"Arrays element in ascending order are: "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

  return 0;
}
