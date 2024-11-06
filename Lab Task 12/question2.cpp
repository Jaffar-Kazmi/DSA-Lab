/*Take an unsorted array from user of size 9. Sort the array in ascending order using Bubble
Sort technique. Use a condition to stop your program if the array is already sorted*/

#include <iostream>
using namespace std;
int main() {
    int arr[9];
    
    for (int i = 0; i < 9; i++) {
        cout << "Enter a number : ";
        cin >> arr[i];
    }
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
    
    bool swapped;
    for(int i=0; i<9; i++){
        swapped = false;
        for(int j=0; j<9-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }

        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < 9; k++) {
            cout << arr[k] << "\t";
        }
        cout << endl;
    }

    cout << "Sorted array : ";
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}