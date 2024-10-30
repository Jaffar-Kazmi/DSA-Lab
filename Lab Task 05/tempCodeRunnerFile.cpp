Q.2

#include <iostream>
#include <string>
using namespace std;
#define MAX 100 // Define a maximum size for our arrays (queues)
class Queue
{
    char arr[MAX]; // Array to hold the queue elements
    int front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }
    bool isEmpty()
    {
        return front == -1 || front > rear;
    }
    // Enqueue a character to the rear of the queue
    void enqueue(char value)
    {
        if (rear == MAX - 1)
        {
            cout << " Queue is full!" << endl; // Overflow condition
        }
        else
        {
            if (front == -1)
                front = 0; // Initialize front if first element
            arr[++rear] = value;
        }
    }
    char dequeue()
    {
        if (isEmpty())
        {
            cout << " Queue is empty!" << endl;
            return '\0'; // Return null character if queue is empty
        }
        return arr[front++];
    }
    void display()
    {
        if (isEmpty())
        {
            cout << " Queue is empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    // Concatenate another queue into this one
    void concatenate(Queue &q)
    {
        while (!q.isEmpty())
        {
            enqueue(q.dequeue());
        }
    }
};
int main()
{
    string input;
    cout << "\n Enter a string: ";
    getline(cin, input); // Get input string
    Queue queues[10];
    int queueIndex = 0;
    Queue currentQueue;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] != ' ')
        {
            currentQueue.enqueue(input[i]); // Enqueue each character of the word
        }
        else
        {
            if (!currentQueue.isEmpty())
            {
                queues[queueIndex++] = currentQueue; // Store the queue of the word
                currentQueue = Queue();              // Reset the current queue for the next word
            }
        }
    }
    // Handle the last word if any
    if (!currentQueue.isEmpty())
    {
        queues[queueIndex++] = currentQueue;
    }
    // Display individual queues for each word
    for (int i = 0; i < queueIndex; i++)
    {
        cout << " Q" << i + 1 << ": ";
        queues[i].display();
    }
    Queue resultQueue = queues[0]; // Start with the first queue
    for (int i = 1; i < queueIndex; i++)
    {
        resultQueue.concatenate(queues[i]);
    }
    cout << "\n Concatenated Queue: ";
    resultQueue.display();
    return 0;
}