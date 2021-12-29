#include <iostream>
using namespace std;

int main()
{
  cout<<"Enter the size of the array"<<endl;
  int size;
  cin>>size;

  int num[100];
//Taking user input using loop
cout<<"Enter the elements of the array"<<endl;
  for(int i=0;i<size;i++)
  {
    cin>>num[i];
  }

//Printing the array
  cout<<"The elements of array are: "<<endl;
  for(int j=0;j<size;j++)
  {
    cout<<num[j]<<" ";
  }
  cout<<endl;

//Minimum value of an array

  int min=num[0];
  for(int k=0;k<size;k++)
  {
    if(num[k]<min)
    {
      min=num[k];
    }
    else
    {
      continue;
    }
  }
  cout<<"Minimumm value of the array is "<<min<<endl;

//Maximum element of an array

  int max=num[0];
  for(int l=0;l<size;l++)
  {
    if(num[l]>max)
    {
      max=num[l];
    }
    else
    {
      continue;
    }
  }
  cout<<"Maximum element of the array is "<<max<<endl;

  return 0;
}
