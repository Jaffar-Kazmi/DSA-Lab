/*Write a program that lets the user to enter the total rainfall for each of 12 months into an array
of doubles. The program should calculate and display the total rainfall for the year, the average
monthly rainfall and the month with the highest and lowest rainfall.*/

#include <iostream>
using namespace std;
int main()
{
    double rainfall[12];
    double total = 0, average;
    int highestMonth = 0, lowestMonth = 0;
    cout << "Enter the rainfall for each of the 12 months: " << endl;
    for (int i = 0; i < 12; i++)
    {
        cin >> rainfall[i];
        total += rainfall[i];
        if (rainfall[i] > rainfall[highestMonth])
        {
            highestMonth = i;
        }
        if (rainfall[i] < rainfall[lowestMonth])
        {
            lowestMonth = i;
        }
    }
    average = total / 12;
    cout << "Total rainfall for the year: " << total << endl;
    cout << "Average monthly rainfall: " << average << endl;
    cout << "Month with highest rainfall: " << (highestMonth + 1) << endl;
    cout << "Month with lowest rainfall: " << (lowestMonth + 1) << endl;
    return 0;
}
