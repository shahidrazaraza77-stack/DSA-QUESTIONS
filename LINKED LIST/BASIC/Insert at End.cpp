#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:

    List() {
        head = tail = NULL;
    }

    void insertEnd(int val) {

        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void printList() {

        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL";
    }
};

int main() {

    List ll;

    ll.insertEnd(10);
    ll.insertEnd(20);
    ll.insertEnd(30);

    ll.printList();

    return 0;
}