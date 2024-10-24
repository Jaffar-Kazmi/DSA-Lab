#include <iostream>
#include <string>

using namespace std;

struct Node {
    string name;
    int semester;
    int sap_id;
    Node* prev;
    Node* next;

    Node(string name, int semester, int sap_id) {
        this->name = name;
        this->semester = semester;
        this->sap_id = sap_id;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class DoubleLinkedList {
    Node* head, *tail;
    int count = 0;

public:
    DoubleLinkedList() {
        head = tail = nullptr;
    }

    void insertAtStart(string name, int semester, int sap_id){
        Node *newNode = new Node(name, semester, sap_id);

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

    void insertAtEnd(string name, int semester, int sap_id) {
        Node* newNode = new Node(name, semester, sap_id);

        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        count++;
    }

    void deleteFromStart() {
        if (!head) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        delete temp;
        count--;
    }

    void deleteFromEnd() {
        if (!head) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        if (tail != nullptr) {
            tail->next = nullptr;
        }
        delete temp;
        count--;
    }

    void insertAt(int position, string name, int semester, int sap_id) {
        if (position < 1 || position > count + 1) {
            cout << "Invalid position\n";
            return;
        }

        if (position == 1) {
            insertAtStart(name, semester, sap_id);
            return;
        }

        if (position == count + 1) {
            insertAtEnd(name, semester, sap_id);
            return;
        }

        Node* newNode = new Node(name, semester, sap_id);
        Node* current = head;
        for (int i = 1; i < position - 1; i++) {
            current = current->next;
        }

        newNode->prev = current;
        newNode->next = current->next;
        current->next->prev = newNode;
        current->next = newNode;
        count++;
    }

    void display() {
        if (!head) {
            cout << "List is empty\n";
            return;
        }

        cout << "Name\tSemester\tSAP ID\n";
        Node* current = head;
        while (current != nullptr) {
            cout << current->name << "\t" << current->semester << "\t" << current->sap_id << endl;
            current = current->next;
        }
    }
};

int main() {
    DoubleLinkedList list;

    for (int i = 0; i < 7; i++) {
        string name;
        int semester, sap_id;
        cout << "Enter name, semester, and SAP ID: ";
        cin.ignore();
        getline(cin, name);
        cin >> semester ;
        cin >> sap_id;
        list.insertAtEnd(name, semester, sap_id);
    }

    int choice;
    do {
        cout << "\n1. Insert at any location\n";
        cout << "2. Delete from start\n";
        cout << "3. Delete from end\n";
        cout << "4. Display records\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int position;
                string name;
                int semester, sap_id;
                cout << "Enter position, name, semester, and SAP ID: ";
                cin >> position >> name >> semester >> sap_id;
                list.insertAt(position, name, semester, sap_id);
                break;
            }
            case 2:
                list.deleteFromStart();
                break;
            case 3:
                list.deleteFromEnd();
                break;
            case 4:
                list.display();
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}