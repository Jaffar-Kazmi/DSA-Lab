
#include <iostream>
using namespace std;
class Stack
{
private:
    int arr[4];
    int top;
    int maxsize = 4;

public:
    Stack()
    {             // stack constructer
        top = -1; // first we intialize top with -1
    }
    void push(int value)
    {
        if (top == maxsize - 1)
        {
            cout << "Stack Overflow" << " : " << value << endl;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << value << " : " << " " << "pushed into stack" << endl;
        }
    }
    // pop element
    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow canont pop." << ":" << endl;
            return;
        }
        else
        {
            cout << arr[top] << ":" << "Popped from stack." << endl;
            top--; // decrement the top
        }
    }
    // peek operation
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty:" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    // to check stack empty or not
    bool isEmpty()
    {
        return top == -1;
    }
};
int main()
{
    Stack obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    cout << "\n";
    obj.push(50); // this show stack over flow
    cout << "\n";
    cout << "Top element of an stack is " << " : " << obj.peek() << endl;
    cout << "\n";
    obj.pop();
    obj.pop();
    obj.isEmpty(); // return -1 if the array is empty
    return 0;
}