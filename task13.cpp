#include<iostream>
using namespace std;
void tom();
main()
{
tom();



}
void tom()
{ 
  int for_time_in_minutes;
  int time_in_hours;
  int time_in_minutes;
  int difference_in_time;
  int time_to_play;
  int holidays;
  int time_in_working_days;
  int time_in_holidays;
  int year=365;
  int working_days;
  cout << "Enter the number of holidays: ";
  cin >> holidays;
  working_days=365-holidays;
  time_in_working_days=working_days*63;
  time_in_holidays=holidays*127;
  time_to_play=time_in_working_days+time_in_holidays;
  difference_in_time=30000-time_to_play;
  if(time_to_play<=30000)
  {
   cout <<"Tom sleeps well"<< endl;
  }
  if(time_to_play>30000)
  {
   cout <<"Tom will run away" << endl;
  }
  cout << "Difference from norm :" <<difference_in_time << endl;
  for_time_in_minutes=difference_in_time%60;
  time_in_hours = difference_in_time/60;
  time_in_minutes=time_in_hours;
  cout << "  hours " << time_in_minutes ;
  cout << " and";
  cout << " min" <<for_time_in_minutes;
}