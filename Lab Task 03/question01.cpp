// Question # 01

#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int arr[rows][cols];
    int sum = 0, product = 1;
    double average;
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
            product *= arr[i][j];
        }
    }
    average = sum / (double)(rows * cols);
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << average << endl;
    return 0;
}


