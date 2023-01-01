#include <iostream>
using namespace std;
void airline();
main()
{

 airline();


}
void airline()
{
  string country_name;
  int ticket_price;
  int discount;
  int discounted_price;
  cout << "Enter name of the country: ";
  cin >> country_name;
  cout << "Enter ticket price in dollars: " ;
  cin >> ticket_price;
  if(country_name=="pakistan")
    {
     discount=(ticket_price*5)/100;
     discounted_price=ticket_price-discount;
     cout << "Discounted price: "<<discounted_price;
    }
  if(country_name=="ireland")
    {
     discount=(ticket_price*10)/100;
     discounted_price=ticket_price-discount;
     cout << "Discounted price: "<<discounted_price;
    }
  if(country_name=="india")
    {
     discount=(ticket_price*20)/100;
     discounted_price=ticket_price-discount;
     cout << "Discounted price: "<<discounted_price;
    }
  if(country_name=="england")
    {
     discount=(ticket_price*30)/100;
     discounted_price=ticket_price-discount;
     cout << "Discounted price: "<<discounted_price;
    }
  if(country_name=="canada")
    {
     discount=(ticket_price*45)/100;
     discounted_price=ticket_price-discount;
     cout << "Discounted price: "<<discounted_price;
    }






}
