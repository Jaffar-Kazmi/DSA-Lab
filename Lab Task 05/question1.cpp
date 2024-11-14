/*Implement Class Queue, its data members, and operation listed below.
 Queue ()
A non-parameterized constructor that creates an empty queue. Where should the front
and rear of an empty queue point to?
 enqueue ()
Inserts the element at the rear of queue.
 dequeue ()
Removes the element from the front of queue.
 isEmpty ()
Returns True if queue is empty else returns False.
 display ()
Display all the elements of Queue*/

#include <iostream>
using namespace std;
class Queue
{
private:
    int front, rear;
    int size;
    int *arr;

public:
    Queue()
    {
        size = 5;
        front = rear = -1;
        arr = new int[size];
    }
    void enqueue(int value)
    {
        if (rear == size - 1)
        {
            cout << "\n Queue is full, cannot enqueue " << value << endl;
            return;
        }
        if (front == -1)
        {
            front = 0; 
        }
        arr[++rear] = value; // Increment rear and add the new element
        cout << " " << value << " enqueued to the queue." << endl;
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "\n Queue is empty, cannot dequeue." << endl;
            return;
        }
        cout << " " << arr[front] << " dequeued from the queue." << endl;
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
    }
    bool isEmpty()
    {
        return (front == -1);
    }
    void display()
    {
        if (isEmpty())
        {
            cout << " Queue is empty." << endl;
            return;
        }
        cout << "\n Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Queue()
    {
        delete[] arr;
    }
};
int main()
{
    Queue q; // Creating an empty queue
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); // This should show "Queue is full"
    q.display();
    q.dequeue();
    q.dequeue();
    q.display(); // Display current queue elements again
    cout << "\n Is the queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    return 0;
}

