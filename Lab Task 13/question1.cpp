/*Take an unsorted array of size 7. Sort the array in descending order using Quick Sort
technique. Take the first element as pivot element and dry run your code to find the right position
of that pivot element.*/

#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;

    for (int j = low+1; j <= high; j++)
    {
        if (arr[j] > pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i], arr[low]);
    return i;
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int index = partition(arr, low, high);
        quicksort(arr, low, index - 1);
        quicksort(arr, index + 1, high);
    }
}

int main()
{
    int arr[] = {34, 18, 64, 23, 65, 75, 23};
    int length = sizeof(arr) / sizeof(int);

    cout << "Array before sorting : ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    quicksort(arr, 0, length - 1);

    cout << "Array after sorting : ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
