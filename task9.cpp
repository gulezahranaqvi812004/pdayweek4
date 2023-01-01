#include <iostream>
using namespace std;
void reverse();
main()
{
   reverse();
}
void reverse()
{ 
  while(true)
  {
    string letter;
    cout <<"Enter true or false: ";
    cin >>letter;
    if(letter=="true")
    { 
     cout << "Fasle" << endl;
    }
    if(letter=="false")
    {
     cout << "True" << endl; 
    }
  }
}