#include <iostream>
using namespace std;
float discounts(string day,string month,int amount);
main()
{
    string day, month;
    int amount;
    cout << "enter day: ";
    cin >> day;
    cout <<"enter month: ";
    cin >> month;
    cout << "enter amount: ";
    cin >> amount;
   float payableamount= discounts( day,month,amount);

    cout << "payable amount is:"<<payableamount;


}
float discounts(string day,string month,int amount)
{
    int payable_amount;int discount;

 if(day =="sunday" && month == "october")   
 {
  discount = (amount*10)/100;
  payable_amount = amount-discount;
  return payable_amount;
 }
 
 
 else if (day =="sunday" && month !="october" )
 {
   discount = (amount*5)/100;
   payable_amount = amount-discount; 
   return payable_amount;
 }
 else
 {
    return amount;
 }
 return payable_amount;
}

