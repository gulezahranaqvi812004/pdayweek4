#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void print_a();
void print_w();
void print_i();
void print_s();
main()
{
       print_a();
       print_w();
       print_a();
       print_i();
       print_s();
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void print_a()
{ 
  cout << "   *       "<<endl;
  cout << "  * *      "<<endl; 
  cout << " *****     "<<endl;
  cout << "*     *    "<<endl;

}
void print_w()
{
 cout << "*     *   "<<endl;
 cout << "*  *  *   "<<endl;
 cout << "* * * *   "<<endl;
 cout << "*     *   "<<endl;
 
}
void print_i()
{
  cout << " *****      "<<endl;
  cout << "   *        "<<endl;
  cout << "   *        "<<endl;
  cout << " *****      "<<endl;
 
}
void print_s()
{
  cout << "***      "<<endl;
  cout << "*        "<<endl;
  cout << " *       "<<endl;
  cout << "***      "<<endl;
  
}