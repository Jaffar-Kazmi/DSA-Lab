// Question # 01

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
{ // stack constructer
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
if (top == -1){
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

// Question # 02
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
return '\0';}
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