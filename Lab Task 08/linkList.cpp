#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node() {
        data = 0;
        next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
    Node* head;
  public:
    
    LinkedList() {
        head = NULL;
    }

    // Method to insert a node at the end of the list
    void insertNode(int data);

    // Method to print all nodes of the list
    void printList();

    // Method to delete a node by its value
    void deleteNode(int key);
};

// Function to insert a node at the end of the linked list
void LinkedList::insertNode(int data) {
    // Create a new node
    Node* newNode = new Node(data);

    // If the list is empty, make the new node the head
    if (head == NULL) {
        head = newNode;
        return;
    }

    // Otherwise, traverse to the last node
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Insert the new node at the end
    temp->next = newNode;
}

// Function to print all the nodes in the linked list
void LinkedList::printList() {
    Node* temp = head;

    // If the list is empty
    if (temp == NULL) {
        cout << "The list is empty." << endl;
        return;
    }

    // Traverse and print the list
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;  // End of the list
}

// Function to delete a node by its value (key)
void LinkedList::deleteNode(int key) {
    Node* temp = head;
    Node* temp2 = NULL;

    // If the head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key) {
        head = temp->next;  // Change head
        delete temp;        // Free memory
        return;
    }

    // Search for the key to be deleted, keep track of the previous node
    while (temp != NULL && temp->data != key) {
        temp2 = temp;
        temp = temp->next;
    }

    // If the key was not found in the list
    if (temp == NULL) {
        cout << "Key " << key << " not found in the list." << endl;
        return;
    }

    // Unlink the node from the list and free memory
    temp2->next = temp->next;
    delete temp;
}

int main() {
    
    LinkedList list;

    list.insertNode(10);
    list.insertNode(20);
    list.insertNode(30);
    list.insertNode(40);

    // Print the list
    cout << "Linked List: ";
    list.printList();

    // Delete a node
    list.deleteNode(20);

    // Print the list again
    cout << "After deletion of 20: ";
    list.printList();

    return 0;
}
