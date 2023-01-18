#include <iostream>
using namespace std;
int mark(int);
main()
{
 int fail;   
cin >> fail;
char grade=mark(fail);
cout << "your grade is" << grade;
}
int mark(int marks)
{
 char grade;
if (marks < 50)
grade='F';
if (marks >=50 && marks <=60)
grade='E';
if (marks >=61 && marks <=70)
grade='D';
if (marks >=71 && marks <=80)
grade = 'C';
if (marks >=81 && marks <=85)
grade = 'B';
if (marks >=85)
grade = 'A' ;
return grade;
}