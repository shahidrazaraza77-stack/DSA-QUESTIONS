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

    bool search(int key) {

        Node* temp = head;

        while (temp != NULL) {

            if (temp->data == key) {
                return true;
            }

            temp = temp->next;
        }

        return false;
    }
};

int main() {

    List ll;

    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);

    if (ll.search(30)) {
        cout << "Element found";
    }
    else {
        cout << "Element not found";
    }

    return 0;
}