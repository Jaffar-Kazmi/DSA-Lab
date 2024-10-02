#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int lb = 0;
    int ub = size-1;

    cout << "\nActive elements at beginning : \n";
    for(int i = 0 ; i<size ; i++){
        cout << arr[i] << "\t";
    }

    while(lb<=ub){
        int mid = (lb+ub)/2;
        if(target == arr[mid]){
            return mid;
        }
        else if(target < arr[mid]){
            ub = mid-1;
            cout << "\nActive elements : \n";
            for(int i = lb; i<=ub; i++ ){
                cout << arr[i] << "\t" ;
            }
        
        }
        else if(target > arr[mid]){
            lb= mid+1;
            cout << "\nActive elements : \n";
            for(int i = lb; i<=ub; i++ ){
                cout << arr[i] << "\t" ;
            }
        }
    }

    return -1;  

}
int main(){

    int size;
    cout << "Enter size of array : ";
    cin>> size;

    int *arr = new int(size);

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