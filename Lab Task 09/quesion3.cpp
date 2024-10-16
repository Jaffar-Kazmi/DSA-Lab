#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

class Queue{
    Node *front, *rear;

  public:
    Queue(){
        front = rear = NULL;
    }

    void enqueue(int data)
    {
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
    
        if (front == NULL)  
            rear = NULL;
    }

    void display(){
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }

        Node *temp = front;
        while(temp != NULL){
            cout << temp->data << "\t";
            temp = temp->next;
        }
        cout << endl;
    }

    void clearQueue(){
        while(front != NULL){
            dequeue();
        }
        cout << "Queue cleared.\n";
    }
};

int main(){
    Queue Q1; 
    Q1.enqueue(10);
    Q1.enqueue(20);
    Q1.enqueue(30);
    
    cout << "After Enqueue\n";
    Q1.display();

    Q1.clearQueue();
    Q1.display();  
}
