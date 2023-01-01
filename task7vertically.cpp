#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void maze();
void player_move_vertically(int x, int y);

main()
{
  system("cls");
  maze();
  int x=25;
  int y=3;
  while(true)
  {
    player_move_vertically(x,y); 
    if(y<18)
      {
       y=y+1;
      }
    if(y==18)
      {
       gotoxy(x,y-1);
       cout << " ";
       y=3;
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
void player_move_vertically(int x, int y)
{
  gotoxy(x,y-1);
  cout<<" ";
  gotoxy(x,y);
  cout << "P";
  Sleep(200);
}

