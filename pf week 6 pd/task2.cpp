#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string studentName;
    double english, math, chemistry, socialScience, biology;
    double totalMarks, percentage;
    char grade;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter marks for English: ";
    cin >> english;

    cout << "Enter marks for Math: ";
    cin >> math;

    cout << "Enter marks for Chemistry: ";
    cin >> chemistry;

    cout << "Enter marks for Social Science: ";
    cin >> socialScience;

    cout << "Enter marks for Biology: ";
    cin >> biology;

    totalMarks = english + math + chemistry + socialScience + biology;
    percentage = (totalMarks / 500) * 100;

    if (percentage >= 90 && percentage <= 100) 
    {
        grade = 'A+';
    } else if (percentage >= 80 && percentage < 90) 
    {
        grade = 'A';
    } else if (percentage >= 70 && percentage < 80) 
    {
        grade = 'B+';
    } else if (percentage >= 60 && percentage < 70) 
    {
        grade = 'B';
    } else if (percentage >= 50 && percentage < 60) 
    {
        grade = 'C';
    } else if (percentage >= 40 && percentage < 50) 
    {
        grade = 'D';
    } else 
    {
        grade = 'F';
    }

    cout << "Student Name: " << studentName << endl;
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
