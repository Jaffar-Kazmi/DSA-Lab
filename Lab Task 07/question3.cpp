/*Given a sorted array of n integers and a target value, find the last occurrence of the target value
in the array*/

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int lb = 0;
    int ub = size-1;
    int result = -1;

    while(lb<=ub){
        int mid = (lb+ub)/2;
        if(target == arr[mid]){
            result = mid;
            lb= mid+1;
        }
        else if(target < arr[mid]){
            ub = mid-1;
        }
        else if(target > arr[mid]){
            lb= mid+1;
        }
    }

    return result;  

}
int main(){

    int size;
    cout << "Enter size of array : ";
    cin>> size;

    int *arr = new int(size);

    cout<<"Enter elements in ascending order.\n";
    for(int i=0; i<size; i++){
        cout<< "Enter element for index " << i << " : " ;
        cin>> arr[i];
    }

    int target;
    cout<< "Enter element you want to search : ";
    cin>> target;

    int result = binarySearch(arr, size, target);

    if(result != -1){
        cout << "Number if found at index " << result << endl ;
    }
    else
        cout << "Number is not found.\n";
}