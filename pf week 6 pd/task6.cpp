#include <iostream>
#include <string>

using namespace std;

int main() 
{
  string month;
  int stays;
  double studioPrice, apartmentPrice, totalStudioPrice, totalApartmentPrice;
  cout << "enter month: ";
  cin >> month;
  cout << "enter days of stay: ";
  cin >> stays;

  // Prices
  if (month == "May" || month == "October") 
  {
    studioPrice = 50;
    apartmentPrice = 65;
    // Discounts
    if (stays > 7) 
    {
      studioPrice *= 0.95;
    }
    if (stays > 14) 
    {
      studioPrice *= 0.7;
    }
  } 
  else if (month == "June" || month == "September") 
  {
    studioPrice = 75.2;
    apartmentPrice = 68.7;
    // Discounts
    if (stays > 14) 
    {
      studioPrice *= 0.8;
    }
  }
   else if (month == "July" || month == "August") 
  {
    studioPrice = 76;
    apartmentPrice = 77;
  }

  // Discounts
  if (stays > 14) 
  {
    apartmentPrice *= 0.9;
  }

  // Total Prices
  totalStudioPrice = stays * studioPrice;
  totalApartmentPrice = stays * apartmentPrice;

  cout << " Studio Price: " << totalStudioPrice << "$" << endl;
  cout << " Apartment Price: " << totalApartmentPrice << "$" << endl;

  return 0;
}
