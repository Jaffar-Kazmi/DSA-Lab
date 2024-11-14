/*Write a program in C++ to reverse a string (Data Structures) using stack.*/

#include <iostream>
#include <string>
#define MAX 1000
using namespace std;
class Stack
{
private:
    int top;
    char arr[MAX];

public:
    Stack()
    {
        top = -1;
    }
    bool push(char value)
    {
        if (top >= (MAX - 1))
        {
            cout << "Stack Overflow\n";
            return false;
        }
        else
        {
            arr[++top] = value;
            return true;
        }
    }
    char pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow\n";
            return '\0';
        }
        else
        {
            char value = arr[top--];
            return value;
        }
    }
    char peek()
    {
        if (top < 0)
        {
            cout << "Stack is Empty\n";
            return '\0';
        }
        else
        {
            return arr[top];
        }
    }
    bool isEmpty()
    {
        return (top < 0);
    }
};
void reverseString(string &str)
{
    Stack mystack;
    int n = str.length();
    // Push all characters of the string onto the stack
    for (int i = 0; i < n; i++)
    {
        mystack.push(str[i]);
    }
    // Pop characters from the stack and store them back into the string
    for (int i = 0; i < n; i++)
    {
        str[i] = mystack.pop();
    }
}
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}