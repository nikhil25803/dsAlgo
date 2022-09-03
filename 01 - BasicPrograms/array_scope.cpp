#include <iostream>
using namespace std;



int main()
{
  int arr1[10]={1,2,3,4,5,6,7,8,9,10};
  //Sum of elements of an array
  int sum=0;
  for(int i=0;i<10;i++)
  {
    sum+=arr1[i];
  }
  cout<<"Sum of the array is: "<<sum<<endl;

  //Square of each elemts of an array

  for(int i=0;i<10;i++)
  {
    int j=arr1[i]*arr1[i];
    cout<<"Square of "<<arr1[i]<<" is "<<j<<endl;
  }

  return 0;
}
