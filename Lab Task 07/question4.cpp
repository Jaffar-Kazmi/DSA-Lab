#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int lb = 0;
    int ub = size - 1;

    int count = 0;

    while (lb <= ub) {
        int mid = (lb + ub) / 2;
        if (target == arr[mid]) {
            count++;

            int left = mid - 1;
            while (left >= lb && arr[left] == target) {
                count++;
                left--;
            }

            int right = mid + 1;
            while (right <= ub && arr[right] == target) {
                count++;
                right++;
            }
            return count;  
        } 
        else if (target < arr[mid]) {
            ub = mid - 1;  // Search left
        } 
        else {
            lb = mid + 1;  // Search right
        }
    }
    return count;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int *arr = new int[size];  // Allocate memory for an array

    cout << "Enter elements in ascending order.\n";
    for (int i = 0; i < size; i++) {
        cout << "Enter element for index " << i << ": ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter element you want to search: ";
    cin >> target;

    int count = binarySearch(arr, size, target);  // Pass count by reference

    if (count > 0) {
        cout << "Number of occurrences = " << count << endl;
    } 
    else {
        cout << "Number is not found.\n";
    }

    delete[] arr;  // Free the allocated memory
    return 0;
}
