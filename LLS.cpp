#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* Next;

    Node(int val) {
        data = val;
        Next = NULL;
    }
};

class LLS {
public:
    void insertfirst(Node* &head, int val) {
        Node* newnode = new Node(val);
        newnode->Next = head;
        head = newnode;
    }

    void insertAtLast(Node* &head, int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = newnode;
            return;
        }
        Node* temp = head;
        while (temp->Next != NULL) {
            temp = temp->Next;
        }
        temp->Next = newnode;
    }

    void View(Node* &head) {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << endl;
            temp = temp->Next;
        }
    }
    void search(Node* &head, int val) {
       if (head == NULL) {
          cout << "List is empty" << endl;
         return;
        }

        Node* temp = head;
        bool found = false;

        while (temp != NULL) {
           if (temp->data == val) {
               cout << "Value found: " << temp->data << endl;
               found = true;
               break; 
            }
             temp = temp->Next; 
        }

        if (!found) {
           cout << "Value not found: " << val << endl;
        }
    }

   
};

int main() {
    Node* head = NULL; 
    LLS list;
    list.insertfirst(head, 5);
    list.insertfirst(head, 6);
    list.insertfirst(head, 7);
    list.insertAtLast(head, 8);
    list.View(head);
    list.search(head, 0);
    list.search(head, 6);


    return 0;
}
