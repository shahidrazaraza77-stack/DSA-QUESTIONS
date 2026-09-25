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

    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void pop_back() {

        if (head == NULL) {
            return;
        }

        // Only one node
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;

        // Go to second-last node
        while (temp->next != tail) {
            temp = temp->next;
        }

        delete tail;

        tail = temp;
        tail->next = NULL;
    }

    void printList() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main() {

    List ll;

    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);

    cout << "Before pop_back: ";
    ll.printList();

    ll.pop_back();

    cout << "After pop_back: ";
    ll.printList();

    return 0;
}