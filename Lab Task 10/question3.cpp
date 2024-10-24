#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class DoubleLinkedList{
    Node *head, *tail;
    int count = 0;

    public:
    DoubleLinkedList(){
        head = tail = nullptr ;
    }

    void insertAtStart(int val){
        Node *newNode = new Node(val);

        if(!head){
            head = tail = newNode; 
        }
        else{
           newNode->next = head;
           head->prev = newNode;
           head = newNode;
        }
        count++;
    }

    void insertAtEnd(int val){
        Node *newNode = new Node(val);

        if(!head){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        count++;
    }

    int getCount(){
        return count;
    }
};

int main(){
    DoubleLinkedList list;

    
    list.insertAtStart(20);
    list.insertAtStart(10);
    list.insertAtEnd(40);
    list.insertAtEnd(50);

    cout << list.getCount() ;

}