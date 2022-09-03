#include <iostream>
#include <string>

using namespace std;

char maxOcc(string s)
{
  int arr[26]={0};

  for(int i=0;i<s.length();i++)
  {
    char ch=s[i];
    int number=0;
    if(ch>= 'a' && ch<= 'z')
    {
      int number=ch-'a';
    }
    else
    {
      number=ch-'A';
    }
    arr[number]++;
  }

  int maxi=-1,ans=0;
  for(int i=0;i<26;i++)
  {
    if(maxi<arr[i])
    {
      ans=i;
      maxi=arr[i];
    }

  }

  char finalAns='a'+ans;
  return finalAns;
}

int main()
{
  string s;
  cin>>s;
  cout<<maxOcc(s)<<endl;


  return 0;
}
