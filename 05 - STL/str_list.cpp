#include<iostream>
#include<list>
using namespace std;
int main()
{   
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(4);
    
    ls.push_front(10);
    ls.emplace_front(100);
 
    return 0;
}