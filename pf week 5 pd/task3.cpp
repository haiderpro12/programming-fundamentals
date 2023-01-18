#include <iostream>
using namespace std;

int main() 
{
    int neededHours, days, workers;

    cin >> neededHours >> days >> workers;

    int trainingDays = days * 0.1;
    int workingDays = days - trainingDays;
    int normalWorkHours = workingDays * 8;
    int overtimeHours = workingDays * 2 * workers;
    int totalWorkHours = normalWorkHours + overtimeHours;

    if (totalWorkHours >= neededHours) 
    {
        cout << "Yes!" << totalWorkHours - neededHours << " hours left." << endl;
    } 
    else 
    {
        cout << "Not enough time!" << neededHours - totalWorkHours << " hours needed." << endl;
    }

    return 0;
}
