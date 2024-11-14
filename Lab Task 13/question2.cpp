/*Take an unsorted array of size 5. Sort the array in descending order using Selection Sort
technique. Dry run your code for each iteration. Implement the code in compiler and display the
values of variables.*/

#include <iostream>
using namespace std;

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {32, 13, 76, 2, 7};
    print_array(arr, 5);
    cout << endl;

    int max;
    for (int i = 0; i < 4; i++)
    {
        cout << "Pass 1 : \n";
        max = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] > arr[max])
            {
                max = j;
                cout << "Maximum : " << arr[max] << endl;
            }
        }
        swap(arr[max], arr[i]);
        print_array(arr, 5);
        cout << endl;
    }
    cout << "Sorted array : \n";
    print_array(arr, 5);
    return 0;
}
