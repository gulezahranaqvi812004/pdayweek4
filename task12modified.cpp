#include <iostream>
using namespace std;
void shop();
main()
{
 
  shop();
}
void shop()
{
  float discount; 
  float amount;
  string flower;
  int number_of_flowers;
  float amount_of_flowers;
  float discounted_amount;
    while(true)
    {
      cout << "Enter the flowers you purchased: " ;
      cin >> flower;
      cout << "Enter number of flowers: ";
      cin >> number_of_flowers;
   
  if(flower=="red")
  {
     amount=number_of_flowers*2;
     cout << "Amount: "<< amount <<endl;
     if(amount>200)
     {
     discount=(amount*20)/100;
     discounted_amount=amount-discount;
     cout << "Discounted amount: "<< discounted_amount <<endl;
     }  
  }
  if(flower=="white")
  {
    amount=number_of_flowers*4.1;
    cout << "Amount: "<< amount <<endl;
    if(amount>200)
    {
    discount=(amount*20)/100;
    discounted_amount=amount-discount;
    cout << "Discounted amount: "<< discounted_amount <<endl;
    } 
  } 
  if(flower=="tulip")
  {
    amount=number_of_flowers*2.5;
    cout << "Amount: "<< amount <<endl;
    if(amount>200)
    {
    discount=(amount*20)/100;
    discounted_amount=amount-discount; 
    cout << "Discounted amount: "<< discounted_amount <<endl;
    }  
  }
  }
}
