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
