#include <iostream>
using namespace std;
string checkTitle(int, char);
main()
{
int age;
char gender;
cout << "enter age: ";
cin >> age;
cout << "enter gender: ";
cin >> gender;
string title = checkTitle(age,gender);
cout << "title is: "<< title;
}
string checkTitle(int age, char gender)
{
 string genders;
if (age >= 16 && gender == 'm')
{
genders = "Mr,";
}
if(age < 16 && gender == 'm')
{
genders = "Master";
}
if(age >= 16 && gender == 'f' )
{
genders = "Ms.";
}
if(age < 16 && gender == 'f')
{
genders = "Miss ";
}
return genders;
}