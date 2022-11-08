#include<iostream>
#include<stdc++.h>
using namespace std;

// Namespcae is like a scope
namespace nikhil {
    int val = 50;
    int getVal(){
        return val*10;
    }
}

struct node
{
    string str;
    int n;
    double d;
    char x;

    node(str_,n_,d_,x_){
        str =str_;
    }
};


int main()
{   
    double val = 50.5;
    cout<<val<<endl;

    cout<<nikhil::getVal()<<endl;

 
    return 0;
}