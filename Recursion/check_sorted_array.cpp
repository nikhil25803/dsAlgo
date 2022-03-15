#include <iostream>
using namespace std;

bool sorted(int arr[], int n){
    if(n==1){
      return true;
    }

  bool restArray = sorted(arr+1, n-1); // Will point the pointer at the 1st index of the array and refduce the array size by one
  return (arr[0]<arr[1]  && restArray);
}

int main(){
  int arr[20];
  int n;
  cout<<"Enter the number of elements you wants to enter: ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  cout<<sorted(arr, n)<<endl;


  return 0;
}
