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

    void insertAtMiddle(int val) {
        if (head == nullptr) {
            insertAtStart(val);
            return;
        }

        Node* newNode = new Node(val);
        int middle = count / 2;  

        Node* current = head;
        // Move to the middle node
        for (int i = 0; i < middle; i++) {
            current = current->next;
        }
         if (count % 2 == 0) {
            // Even-sized list, insert before the current middle node
            Node* prevNode = current->prev;
            newNode->next = current;
            newNode->prev = prevNode;
            if (prevNode != nullptr) {
                prevNode->next = newNode;
            } else {
                head = newNode; // Update head if necessary
            }
            current->prev = newNode;
        } else {
            // Odd-sized list, insert after the current middle node
            Node* nextNode = current->next;
            newNode->prev = current;
            newNode->next = nextNode;
            if (nextNode != nullptr) {
                nextNode->prev = newNode;
            } else {
                tail = newNode; // Update tail if necessary
            }
            current->next = newNode;
        }
        count++;
    }

    void printList(){
        if(!head){
            cout << "List is empty";
            return;
        }

        Node* current = head;
        while(current){
            cout << current->data << "  ";
            current = current->next;
        }
        cout << endl;
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
    list.insertAtMiddle(30);

    list.printList();

    cout << list.getCount() ;

}