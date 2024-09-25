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

// Question # 02

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}

// Question # 03

#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter 10 values: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int largest = arr[0], smallest = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "Smallest value: " << smallest << endl;
    cout << "Largest value: " << largest << endl;
    return 0;
}

// Question # 04

#include <iostream>
using namespace std;
int main()
{
    double rainfall[12];
    double total = 0, average;
    int highestMonth = 0, lowestMonth = 0;
    cout << "Enter the rainfall for each of the 12 months: " << endl;
    for (int i = 0; i < 12; i++)
    {
        cin >> rainfall[i];
        total += rainfall[i];
        if (rainfall[i] > rainfall[highestMonth])
        {
            highestMonth = i;
        }
        if (rainfall[i] < rainfall[lowestMonth])
        {
            lowestMonth = i;
        }
    }
    average = total / 12;
    cout << "Total rainfall for the year: " << total << endl;
    cout << "Average monthly rainfall: " << average << endl;
    cout << "Month with highest rainfall: " << (highestMonth + 1) << endl;
    cout << "Month with lowest rainfall: " << (lowestMonth + 1) << endl;
    return 0;
}

// Question # 05

#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 3;
void getTotal(int arr[ROWS][COLS])
{
    int total = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            total += arr[i][j];
        }
    }
    cout << "Total: " << total << endl;
}
void getAverage(int arr[ROWS][COLS])
{
    int total = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            total += arr[i][j];
        }
    }
    double average = total / (double)(ROWS * COLS);
    cout << "Average: " << average << endl;
}
void getRowTotal(int arr[ROWS][COLS], int row)
{
    int rowTotal = 0;
    for (int j = 0; j < COLS; j++)
    {
        rowTotal += arr[row][j];
    }
    cout << "Total of row " << row << ": " << rowTotal << endl;
}
void getColumnTotal(int arr[ROWS][COLS], int col)
{
    int colTotal = 0;
    for (int i = 0; i < ROWS; i++)
    {
        colTotal += arr[i][col];
    }
    cout << "Total of column " << col << ": " << colTotal << endl;
}
void getHighestInRow(int arr[ROWS][COLS], int row)
{
    int highest = arr[row][0];
    for (int j = 1; j < COLS; j++)
    {
        if (arr[row][j] > highest)
        {
            highest = arr[row][j];
        }
    }
    cout << "Highest in row " << row << ": " << highest << endl;
}
void getHighestInColumn(int arr[ROWS][COLS], int col)
{
    int highest = arr[0][col];
    for (int i = 1; i < ROWS; i++)
    {
        if (arr[i][col] > highest)
        {
            highest = arr[i][col];
        }
    }
    cout << "Highest in column " << col << ": " << highest << endl;
}
int main()
{
    int arr[ROWS][COLS] = {
        {20, 22, 43},
        {31, 15, 26},
        {17, 38, 29}};
    getTotal(arr);
    getAverage(arr);
    getRowTotal(arr, 1);
    getColumnTotal(arr, 2);
    getHighestInRow(arr, 1);
    getHighestInColumn(arr, 0);
    return 0;
}

// Question # 06

#include <iostream>
using namespace std;
int main()
{
    int arrLength;
    cout << "Enter the number of elements: ";
    cin >> arrLength;
    int *arr = new int[arrLength];
    int oddSum = 0;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 != 0)
        {
            oddSum += arr[i];
        }
    }
    cout << "Sum of odd integers: " << oddSum << endl;
    delete[] arr;
    return 0;
}

// Question # 07

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

// Question # 08

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int *ptrA = &a;
    int *ptrB = &b;
    cout << "Enter value for a: ";
    cin >> *ptrA;
    cout << "Enter value for b: ";
    cin >> *ptrB;
    cout << "Value of a: " << *ptrA << endl;
    cout << "Value of b: " << *ptrB << endl;
    return 0;
}

// Question # 09

#include <iostream>
#include <cmath>
using namespace std;
void menu();
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
int power(int base, int exp);
int main()
{
    menu();
    return 0;
}
void menu()
{
    int choice, a, b;
    cout << "Calculator Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    switch (choice)
    {
    case 1:
        cout << "Result: " << add(a, b) << endl;
        break;
    case 2:
        cout << "Result: " << subtract(a, b) << endl;
        break;
    case 3:
        cout << "Result: " << multiply(a, b) << endl;
        break;
    case 4:
        cout << "Result: " << divide(a, b) << endl;
        break;
    case 5:
        cout << "Result: " << power(a, b) << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }
}
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
double divide(int a, int b)
{
    if (b != 0)
        return (double)a / b;
    else
        cout << "Error! Division by zero." << endl;
    return 0;
}
int power(int base, int exp)
{
    return pow(base, exp);
}