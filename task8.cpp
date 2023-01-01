#include <iostream>
using namespace std;
void is_equal();
main()
{
  is_equal();
}
void is_equal()
{
 while(true)
 {
   int x;
   int y;
   cout << "Enter any integer: ";
   cin >> x;
   cout << "Enter second integer:";
   cin >> y;
   if(x==y)
   { 
     cout << "True" << endl;
   }
   if(x!=y)
   {
     cout << "False" << endl;
   }
 }
}