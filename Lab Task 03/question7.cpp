/*Define a pointer variable. Assign the address of variable to a pointer variable and access the
value of address variable in the pointer variable.*/

#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout << "Address of a: " << ptr << endl;
    cout << "Value at address: " << *ptr << endl;
    return 0;
}