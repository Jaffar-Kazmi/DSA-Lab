#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

class Queue{
    Node *front, *rear;
    int count;      
    int max_size;   

  public:
    Queue(int size){
        front = rear = NULL;
        count = 0;            
        max_size = size;       
    }

    void enqueue(int data)
    {
        if (count == max_size) {
            cout << "Queue Overflow! Cannot insert more elements.\n";
            return;
        }

        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;

        if(front == NULL){
            front = rear = newNode;
        }
        else{
            rear->next = newNode;
            rear = newNode;
        }

        count++;  
    }

    void dequeue()
    {
        if(front == NULL){
            cout << "Queue is empty\n";
            return;
        }

        Node *temp = front;
        front = front->next;
        delete temp;
        count--;  

        if (front == NULL)  
            rear = NULL;
    }

    void display(){
        if (front == NULL) {
            cout << "The Queue is empty\n";
            return;
        }

        Node *temp = front;
        while(temp != NULL){
            cout << temp->data << "\t";
            temp = temp->next;
        }
        cout << endl;
    }

    int getCount() {
        return count;
    }
};

int main(){
    Queue Q1(3);  
    Q1.enqueue(10);
    Q1.enqueue(20);
    Q1.enqueue(30);
    
    cout << "After Enqueue\n";
    Q1.display();
    cout << "Current count: " << Q1.getCount() << endl;

    Q1.enqueue(40);  
}
