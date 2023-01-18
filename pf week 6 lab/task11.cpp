#include <iostream>
using namespace std;

double calculateRemainingBudget(double budget, string category, int peopleCount);

int main() 
{
    double budget;
    string category;
    int peopleCount;
    cout << "Enter budget: ";
    cin >> budget;
    cout << "Enter ticket category (VIP/Normal): ";
    cin >> category;
    cout << "Enter number of people in the group: ";
    cin >> peopleCount;
    calculateRemainingBudget(budget, category, peopleCount);
    return 0;
}

double calculateRemainingBudget(double budget, string category, int peopleCount) 
{
    double vipTicketPrice = 499.99;
    double normalTicketPrice = 249.99;

    double ticketPrice;
    if (category == "VIP") 
    {
        ticketPrice = vipTicketPrice;
    }
    else 
    {
        ticketPrice = normalTicketPrice;
    }

    double transportationPercentage;
    if (peopleCount >= 1 && peopleCount <= 4) 
    {
        transportationPercentage = 0.75;
    }
    else if (peopleCount >= 5 && peopleCount <= 9) 
    {
        transportationPercentage = 0.60;
    }
    else if (peopleCount >= 10 && peopleCount <= 24) 
    {
        transportationPercentage = 0.50;
    }
    else if (peopleCount >= 25 && peopleCount <= 49) 
    {
        transportationPercentage = 0.40;
    }
    else 
    {
        transportationPercentage = 0.25;
    }

    double transportationCost = budget * transportationPercentage;
    double remainingBudget = budget - transportationCost;
    int numberOfTickets = remainingBudget / ticketPrice;

    if (numberOfTickets < peopleCount) 
    {
        cout << "The budget is insufficient to buy tickets for all members of the group." << endl;
        cout << "The remaining budget is: " << remainingBudget << " QR" << endl;
    }
    else 
    {
        double moneyLeft = remainingBudget - (ticketPrice * peopleCount);
        cout << "The budget is sufficient to buy tickets for all members of the group." << endl;
        cout << "The remaining budget is: " << moneyLeft << " QR" << endl;
    }

    return 0;
}