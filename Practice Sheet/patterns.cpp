#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;

    cout<<"Printed pattern is: "<<endl;

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    

    return 0;
} 
