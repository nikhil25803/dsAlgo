#include<iostream>
using namespace std;

class Box
{
public:
  double width;
  double height;
  double  depth;
};

int main()
{
  // Creating an object of Box Class
  Box obj;

  // Assign values to object instance variable
  obj.width = 5;
  obj.height = 10;
  obj.depth = 15;

  //Compute volume of the box
  double volume = obj.width*obj.height*obj.depth;

  //Printing values
  cout<<"Volume of a box: "<<volume<<endl;
}
