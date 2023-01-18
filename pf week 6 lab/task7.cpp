#include <iostream>
using namespace std;
bool greaterNumber(int, int, int);
main()
{
int a;int b;int c;
cout << "enter 1st number: ";
cin >> a;
cout << "enter 2nd number: ";
cin >> b;
cout << "enter 3rd number: ";
cin >> c;
bool fool = greaterNumber(a,b,c);
if(fool == 1)
{
    cout<<"Yes";
}
else{
    cout<<"No";
}
}
bool greaterNumber(int a, int b, int c)
{

if (a == b && b == c) 
{
 return true;
}    
else
{
    return false;
}
}
