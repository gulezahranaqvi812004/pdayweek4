#include<iostream>
using namespace std;
void header();
void marks();
void compare_marks();

main()
{
  char any_key;
  header(); 
  marks();
  while(true)
  {   
  system ("cls");
  cout << "Press any key to continue:";
  cin >> any_key;
  marks();
  system ("cls");
  }

}

void header()
{
  cout << " **********************  "<< endl;
  cout << " *     UET LAHORE     *  "<< endl;
  cout << " **********************  "<< endl;
}
void marks()
{
  int choice;
  string name_1;
  float matric_marks_1;
  float inter_marks_1;
  float ecat_marks_1;
  float matric_percentage_1;
  float inter_percentage_1;
  float ecat_percentage_1;
  float ecat_weight_1;
  float matric_weight_1;
  float inter_weight_1;
  float aggregate_1;
  float per_aggregate_1;
  float ecat_1;
  float inter_1;
  float matric_1;

  string name_2;
  float matric_marks_2;
  float inter_marks_2;
  float ecat_marks_2;
  float matric_percentage_2;
  float inter_percentage_2;
  float ecat_percentage_2;
  float ecat_weight_2;
  float matric_weight_2;
  float inter_weight_2;
  float aggregate_2;
  float per_aggregate_2;
  float ecat_2;
  float inter_2;
  float matric_2;

  cout << "Press 1 to enter the details of 1st student!" << endl;
  cout << "Press 1 to enter the details of 1st student!" << endl;
  cout << "Press 3 to calculate the aggregate of 1st student" << endl;
  cout << "Press 4 to calculate the aggregate of 2nd student" << endl;
  cout << "Press 5 to display the student with roll number 01" << endl;
  cout << "Press 6 to compare marks of two students! "<< endl;
  cout << "Enter your choice: ";
  cin  >> choice;

  if (choice==1)
   {
   system ("cls");
   cout << "You choosed :1 " << endl;
   cout << "Enter your name: ";
   cin >> name_1;
   cout << "Enter your matric marks= ";
   cin >> matric_marks_1;
   cout << "Enter your inter marks= ";
   cin >> inter_marks_1;
   cout << "Enter your ecat marks= ";
   cin >> ecat_marks_1;
   }

  if (choice==2)
  {
   system ("cls");
   cout << "You choosed :2 " << endl;
   cout << "Enter your name: ";
   cin >> name_2;
   cout << "Enter your matric marks= ";
   cin >> matric_marks_2;
   cout << "Enter your inter marks= ";
   cin >> inter_marks_2;
   cout << "Enter your ecat marks= ";
   cin >> ecat_marks_2;
  }

  if (choice==3)
  {
  system ("cls");
  cout << "You choosed :3"<< endl;
  ecat_1=ecat_marks_1/400;
  matric_1=matric_marks_1/1100;
  inter_1=inter_marks_1/1100;
  ecat_weight_1=(ecat_1*40)/100;
  matric_weight_1=(matric_1*30)/100;
  inter_weight_1=(inter_1*30)/100;
  aggregate_1=(ecat_weight_1+inter_weight_1+matric_weight_1);
  per_aggregate_1=aggregate_1*100;
  cout << "aggregate= "<< per_aggregate_1 <<endl;
  }

  if (choice==4)
  {
  system ("cls");
  cout << "You choosed :4"<< endl;
  ecat_2=ecat_marks_2/400;
  matric_2=matric_marks_2/1100;
  inter_2=inter_marks_2/1100;
  ecat_weight_2=(ecat_2*40)/100;
  matric_weight_2=(matric_2*30)/100;
  inter_weight_2=(inter_2*30)/100;
  aggregate_2=(ecat_weight_2+inter_weight_2+matric_weight_2);
  per_aggregate_2=aggregate_2*100;
  cout << "aggregate= "<< per_aggregate_2 <<endl;
  }
  if(choice==6)
  {
   compare_marks();
  }
}
void compare_marks()
{ 
  string name_1;
  string name_2;
  int marks_1;
  int marks_2;
  cout << "Enter your name of 1st student: ";
  cin >> name_1;
  cout << "Enter your name of 1st student: ";
  cin >> name_2;
  cout << "Enter your ecat marks= ";
  cin >> marks_1;
  cout << "Enter your ecat marks= ";
  cin >> marks_2;
  if(marks_1>marks_2)
  {
    cout << "Marks of 1st student is greator.";
  }
  if(marks_1<marks_2)
  {
    cout << "Marks of 2nd student is greator."; 
 }


 
}