/* Take an unsorted array from user of size 5. Sort the array in descending order using
Insertion Sort technique. Dry run your code for each iteration. Display the values of sorted array*/

#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        cout<< "Enter an element : ";
        cin >> arr[i];
    }

    cout << "\nUnsorted array : \n";
    for(int i=0; i<5; i++){
        cout << arr[i] << "\t" ;
    }

    for(int i=1; i<5; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]<temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;

        cout << "\nPass : " << i << endl ;
        for(int i=0; i<5; i++){
        cout << arr[i] << "\t" ;
        }
    }

    cout << "\nSorted array : \n";
    for(int i=0; i<5; i++){
        cout << arr[i] << "\t" ;
    }

}

