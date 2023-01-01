#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void maze();
void player_move_horizontaly(int x, int y);

main()
{
  system("cls");
  maze();
  int x=3;
  int y=8;
  while(true)
  {
    player_move_horizontaly(x,y); 
    if(x<18)
      {
       x=x+1;
      }
    if(x==18)
      {
       gotoxy(x-1,y);
       cout << " ";
       x=3;
      }
  }
}
void maze()
{
  cout << "######################################################       " << endl;
  cout << "#                                                    #       " << endl;
  cout << "#                                                    #       " << endl;
  cout << "#                                                    #       " << endl;
  cout << "#                                                    #	" << endl;
  cout << "#                                                    #       " << endl;
  cout << "#                                                    #       " << endl;
  cout << "#                                                    #       " << endl;
  cout << "#                                                    #	" << endl;
  cout << "#                                                    #       " << endl;
  cout << "#                                                    #       " << endl;
  cout << "#                                                    #       " << endl;
  cout << "#                                                    #	" << endl;
  cout << "#                                                    #       " << endl;
  cout << "#                                                    #       " << endl;
  cout << "#                                                    #       " << endl;
  cout << "#                                                    #       " << endl;
  cout << "#                                                    #       " << endl;
  cout << "######################################################       " << endl;
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void player_move_horizontaly(int x, int y)
{
  gotoxy(x-1,y);
  cout<<" ";
  gotoxy(x,y);
  cout << "P";
  Sleep(200);
}