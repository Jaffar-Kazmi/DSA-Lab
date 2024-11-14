/*Write a program for a calculator using functions.
Your program must have the following functions:
a. Menu () telling the user to select from the options
b. Addition (int a, int b) adding two numbers
c. Subtraction (int a, int b)
d. Division (int a, int b)
e. Multiplication (int a, int b)
f. Pow (int number, int pow)
In the main function you will only call the menu () function*/

#include <iostream>
#include <cmath>
using namespace std;
void menu();
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
int power(int base, int exp);
int main()
{
    menu();
    return 0;
}
void menu()
{
    int choice, a, b;
    cout << "Calculator Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    switch (choice)
    {
    case 1:
        cout << "Result: " << add(a, b) << endl;
        break;
    case 2:
        cout << "Result: " << subtract(a, b) << endl;
        break;
    case 3:
        cout << "Result: " << multiply(a, b) << endl;
        break;
    case 4:
        cout << "Result: " << divide(a, b) << endl;
        break;
    case 5:
        cout << "Result: " << power(a, b) << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }
}
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
double divide(int a, int b)
{
    if (b != 0)
        return (double)a / b;
    else
        cout << "Error! Division by zero." << endl;
    return 0;
}
int power(int base, int exp)
{
    return pow(base, exp);
}