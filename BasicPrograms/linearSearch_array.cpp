#include <iostream>
using namespace std;

bool search(int arr[],int size,int key)
{
  for(int i=0;i<size;i++)
  {
    if(arr[i]==key)
    {
      return 1;
    }
    else
    {
      continue;
    }
  }
}

int main()
{
  int key;
  int arr[10]={5,7,-2,10,22,-2,0,5,22,1};

  //Wheather 1 is present in this array or not
  cout<<"Enter the key: ";
  cin>>key;
  bool found=search(arr,10,key);
  if(found)
  {
    cout<<"Found"<<endl;
  }
  else
  {
    cout<<"Not found"<<endl;
  }


  return 0;
}
