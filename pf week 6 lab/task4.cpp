#include <iostream>
using namespace std;
int discount(string day,string month,int amount);
main()
{
   string day,month;
   int amount; 
  cout << "enter day: ";
  cin >> day;
  cout << "enter month: ";
  cin >> month;
  cout << "enter amount: ";
  cin >> amount;
 int sale = discount( day, month, amount);
 cout << "payable price is" << sale ;
}

int discount(string day,string month,int amount)

{

int purchaseamount;float discounts;

if(day == "sunday" && ( month == "october" || "march" || "august"))
{
  discounts = (amount*10)/100;
  purchaseamount=amount-discounts; 
  return purchaseamount; 
}
else 
{
    return amount;
}
}