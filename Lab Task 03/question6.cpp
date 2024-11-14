/*Write a program that dynamically allocates an array of integers. Read the values from user
and calculate the sum of odd integers*/

#include <iostream>
using namespace std;
int main()
{
    int arrLength;
    cout << "Enter the number of elements: ";
    cin >> arrLength;
    int *arr = new int[arrLength];
    int oddSum = 0;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 != 0)
        {
            oddSum += arr[i];
        }
    }
    cout << "Sum of odd integers: " << oddSum << endl;
    delete[] arr;
    return 0;
}