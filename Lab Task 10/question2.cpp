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

    void deleteByValue(int val){
        if(!head){
            cout << "List id empty" << endl;
            return;
        }

        bool found = false;
        Node *temp = head;
        while(temp != nullptr && temp->data!=val){  
            temp = temp->next;          
        }

        if(temp == nullptr){
            cout << "Value not Found"<< endl;
            return;
        }

        if(temp == head){
            head = head->next;
            if(head != nullptr){
                head->prev = nullptr;
            }
            else{
                tail = nullptr;
            }
        }
        else if(temp == tail){
            tail = tail->prev;
            if(tail != nullptr){
                tail->next = nullptr;
            }
            else{
                head = nullptr;
            }
        }
        else{
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }

        delete temp;
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
};

int main(){
    DoubleLinkedList list;

    
    list.insertAtStart(20);
    list.insertAtStart(10);
    list.insertAtEnd(40);
    list.insertAtEnd(50);

    list.printList();

    list.deleteByValue(40);

    list.printList();


}