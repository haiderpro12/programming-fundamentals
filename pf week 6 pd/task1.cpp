#include <iostream>
using namespace std;

string activity(string temperature, string humidity);   

int main() 
{

     string temp, hum;
    cout << "Enter temperature (warm or cold): ";
    cin >> temp;
    cout << "Enter humidity (dry or humid): ";
    cin >> hum;
   string player =  activity( "temperature", "humidity");
   cout << "play is: " << player << endl;

}
string activity(string temperature, string humidity) 
{
    if (temperature == "warm") 
    {
        if (humidity == "dry") 
        {
            cout << "Play tennis" << endl;
        } else if (humidity == "humid") 
        {
            cout << "Swim" << endl;
        }
    } else if (temperature == "cold") 
    {
        if (humidity == "dry") 
        {
            cout << "Play basketball" << endl;
        } else if (humidity == "humid") 
        {
            cout << "Watch tv" << endl;
        }
    } else 
    {
        cout << "Invalid temperature or humidity input" << endl;
    }
}
