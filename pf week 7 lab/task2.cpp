#include <iostream>
using namespace std;
int main()
{
    int number;
cout << "enter number: ";
cin >> number;
int p=0;int c = 1; int n;
cout << "previous" << "," << "current";
for(int count = 1;count <=number;count ++)
   {
    
     n = p + c;
     cout << "series is: "<< n << endl;
     p = c;
     c = n ;
     
   }

   
}