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
        Node *newNode;
        newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        
        if(front == NULL){
            front = rear = newNode;
        }
        else{
            rear->next = newNode;
            rear = newNode;
        }
        Node *temp;

    }

    void dequeue(){

        Node *temp;
        if(front == NULL)
        cout << "Queue is empty";
        else{
            temp = front;
            front = front->next;
            delete temp;
        }

    }

    void display(){
        Node *temp;
        temp = front;
        while(temp!=NULL){
            cout << temp->data << "\t";
            temp = temp->next;
        }
        cout << endl;
    }    
};

int main(){
    Queue Q1;
    Q1.enqueue(10);
    Q1.enqueue(20);
    Q1.enqueue(30);
    cout << "After Enqueue:\n";
    Q1.display();
    Q1.dequeue();
    cout << "After Dequeue:\n";
    Q1.display();
}