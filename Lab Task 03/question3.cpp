/*Write a program that lets the user to enter the 10 values into the array. The program should
then display the largest and the smallest values stored in the array.*/

#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter 10 values: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int largest = arr[0], smallest = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "Smallest value: " << smallest << endl;
    cout << "Largest value: " << largest << endl;
    return 0;
}