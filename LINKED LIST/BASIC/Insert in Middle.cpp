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

    void insertMiddle(int val, int pos) {

        // If inserting at first position
        if (pos == 0) {

            Node* newNode = new Node(val);

            newNode->next = head;
            head = newNode;

            if (tail == NULL) {
                tail = newNode;
            }

            return;
        }

        Node* temp = head;

        // Move to node before required position
        for (int i = 0; i < pos - 1; i++) {

            if (temp == NULL) {
                return;
            }

            temp = temp->next;
        }

        if (temp == NULL) {
            return;
        }

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == NULL) {
            tail = newNode;
        }
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

    ll.insertMiddle(25, 2);

    ll.printList();

    return 0;
}