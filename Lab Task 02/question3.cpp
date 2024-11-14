/*Write a program for linear search using the concept of dynamic array (Note: Program
should handle the situation if item is not in the list)*/

#include <iostream>
using namespace std;
int main()
{
    int sor, key;
    bool found = false;
    cout << "Enter size of array : ";
    cin >> sor;
    int *dyarr = new int(sor);

    for (int i = 0; i < sor; i++){
        cout << "Enter element : ";
        cin >> dyarr[i];
    }

    for (int i = 0; i < sor; i++){
        cout << dyarr[i] << endl;
    }

    cout << "Enter number you want to search : ";
    cin >> key;

    for (int i = 0; i < sor; i++){
        if (dyarr[i] == key){
            cout << "Number \"" << key << "\" is found at index : " << i << endl;
            found = true;
            break;
        }
    }

    if (!found){
        cout << "Number not found.";
    }

    return 0;
}
