#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void print_gul();
main()
{
   system ("cls");
   gotoxy(15,15);
   print_gul();
  
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void print_gul()
{
  cout << "        *****     *     *      *          "<<endl;
gotoxy(15, 16);
  cout << "      *           *     *      *          "<<endl;
gotoxy(15, 17);
  cout << "     *            *     *      *          "<<endl;
gotoxy(15, 18);
  cout << "     *    ***     *     *      *          "<<endl;
gotoxy(15, 19);
  cout << "      *     *     *     *      *          "<<endl;
gotoxy(15, 20);
  cout << "        *****     ******       ******     "<<endl;
}
