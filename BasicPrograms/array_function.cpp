#include <iostream>
using namespace std;

void arrayy(int arr[],int size)
{
  // int size=sizeof(arr)/sizeof(int);
  cout<<"Printing Array"<<endl;
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<endl;
  }
}

int main()
{
  int array2[10]={1,2,3,4,5,6,7,8,9,10};
  arrayy(array2,10);


  return 0;
}
