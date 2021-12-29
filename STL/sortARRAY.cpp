#include <iostream>
#include <algorithm>

using namespace  std;

int main()
{
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;

  int arr[n];
  cout<<"\nEnter the element of the array: "<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  cout<<"\nThe entered array is: "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

  //Sorting

  sort(arr,arr+n);
  cout<<"\nSorted array in ascending order is: "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  //Sorting in descending order is:
  cout<<"Sorted array in descednig order: ";
  sort(arr,arr+n,greater<int>());
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }


  return 0;
}
