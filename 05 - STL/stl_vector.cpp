#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(1);
    v.emplace_back(10);


    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    // Creates a acontainer with 5 times 100
    vector<int>v1{5,100};

    // 5 instances of garbage value
    vector<int>v2(5);
    
    // COntainer of 5 instances of 20
    vector<int>v3(5,20);

    // Copy a container
    vector<int>v4(v1);

    // iterators
    vector<int>::iterator it = v1.begin();
    // it++;
    // cout<<*(it)<<" ";

    // it=it+2;
    // cout<<*(it)<<endl;

    for(auto it=v3.begin();it!=v3.end();it++){
        cout<<*(it)<<" "<<endl;
    }

    for(auto it :v3){
        cout<<it<<" ";
    }
    cout<<endl;

    // Deletion in a vector
    vector<int>v6  = {1,2,3,4,5,6,7,8,9,10};
    for(auto it=v6.begin();it!=v6.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    v6.erase(v6.begin(),v6.begin()+3);
    for(auto it=v6.begin();it!=v6.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    //  Insert an element
    vector<int>v7 = {7,8,9,4,5,6,1,2,3,2};
     
    for(auto it :v7){
        cout<<it<<" ";
    }
    cout<<endl;

    v7.insert(v7.begin(),2,10);
    for(auto it :v7){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<v7.size()<<endl; // Return the size of the vector
    
    return 0;
}