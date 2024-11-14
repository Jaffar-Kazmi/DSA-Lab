/*Write a program that asks the user to enter integers as inputs to be stored in the variables 'a'
and 'b' respectively. There are also two integer pointers named ptrA and ptrB. Assign the
values of 'a' and 'b' to ptrA and ptrB respectively, and display them.*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int *ptrA = &a;
    int *ptrB = &b;
    cout << "Enter value for a: ";
    cin >> *ptrA;
    cout << "Enter value for b: ";
    cin >> *ptrB;
    cout << "Value of a: " << *ptrA << endl;
    cout << "Value of b: " << *ptrB << endl;
    return 0;
}