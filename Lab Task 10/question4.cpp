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
    
    DoubleLinkedList mergeList(DoubleLinkedList &list1, DoubleLinkedList &list2){
        DoubleLinkedList mergedList;

        Node *current1 = list1.head;
        Node *current2 = list2.head;

        while(current1 != nullptr && current2 != nullptr){
            if(current1->data <= current2->data){
                mergedList.insertAtEnd(current1->data);
                current1 = current1->next;
            }
            else{
                mergedList.insertAtEnd(current2->data);
                current2 = current2->next;
            }
        }
        while (current1 != nullptr){
            mergedList.insertAtEnd(current1->data);
            current1 = current1->next;
        }

        while (current2 != nullptr){
            mergedList.insertAtEnd(current2->data);
            current2 = current2->next;
        }

        return mergedList;
        

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
    DoubleLinkedList list1;
    DoubleLinkedList list2;

    list1.insertAtEnd(10);
    list1.insertAtEnd(45);

    list2.insertAtEnd(40);
    list2.insertAtEnd(50);

    list1.printList();
    list2.printList();

    DoubleLinkedList mergedList = mergedList.mergeList(list1, list2);

    mergedList.printList();



}