#include <iostream>
using namespace std;
void challan();
main()
{
challan();




}
void challan()
{
  while(true)
  {
    int speed;
    cout << "Enter speed of the car: ";
    cin >> speed;
    if(speed>100)
    {
      cout << "Halt....YOU WILL BE CHALLENGED!!" << endl;
    }
    if(speed<100)
    {
      cout << "Perfect! you are going good" << endl;
    }
  }
}