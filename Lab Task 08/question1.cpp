#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string name;        
    int sap_id;        
    Node* next;  

    Node(string name, int sap_id) {
        this->name = name;
        this->sap_id = sap_id;
        this->next = NULL;
    }
};

class LinkedList {
private:
    Node* head;  

public:
    LinkedList() {
        head = NULL;
    }

    void insertNode(string name, int sap_id) {
        Node* newNode = new Node(name, sap_id);

        if (head == NULL) {
            head = newNode;  
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;  
        }
        temp->next = newNode;  
    }

    
    void deleteNode(int position) {
        if (head == nullptr) {
            cout << "The list is empty." << endl;
            return;
        }

        Node* temp = head;

        if (position == 0) {
            head = temp->next;  
            delete temp;        
            return;
        }

        // Find previous node of the node to be deleted
        for (int i = 0; temp != NULL && i < position - 1; i++) {
            temp = temp->next;  
        }

        if (temp == NULL || temp->next == NULL) {
            cout << "Position " << position << " does not exist." << endl;
            return;
        }

        Node* next = temp->next->next;  // Store pointer to the next of the node to be deleted
        delete temp->next;                      // Free memory
        temp->next = next;                      // Unlink the deleted node from the list
    }

    void printList() {
        Node* temp = head;
        int index = 0;
        while (temp != nullptr) {
            cout << "Student " << index + 1 << ": Name: " << temp->name << ", SAP_ID: " << temp->sap_id << endl;
            temp = temp->next;
            index++;
        }
    }

    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

int main() {
    LinkedList list;  

    int numStudents;
    cout << "Enter the number of students (minimum 5): ";
    cin >> numStudents;

    if (numStudents < 5) {
        cout << "Please enter at least 5 students." << endl;
        return 1;
    }

    for (int i = 0; i < numStudents; i++) {
        string name;
        int sap_id;
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name;  
        cout << "Enter SAP ID of student " << i + 1 << ": ";
        cin >> sap_id;  
        list.insertNode(name, sap_id);  
    }

    cout << "\nCurrent list of students:" << endl;
    list.printList();

    // Delete the 2nd and 5th students
    list.deleteNode(1);
    list.deleteNode(3);  

    cout << "\nUpdated list of students after deletion:" << endl;
    list.printList();

    return 0;
}
