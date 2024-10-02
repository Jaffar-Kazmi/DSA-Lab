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