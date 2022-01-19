#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        cin>>i;
        v.push_back(i);
    }

    int x,y,z;
    cin>>x;
    // int x1=x-1;
    cin>>y>>z;
    // int z1=z-1;

    v.erase(v.begin()+x-1);
    v.erase(v.begin()+y-1,v.end()+z-1);

    for(int j=0;j<v.size();j++)
    {
        cout<<v.at(j)<<" ";
    }



    return 0;
}
