#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    void display() {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    int ch,val;
    cout<<"1) push"<<endl;
    cout<<"2) pop"<<endl;
    cout<<"3) display"<<endl;
    cout<<"4)  excit"<<endl;
    do{
    	cout<<"enter a choice: "<<endl;
    	cin>>ch;
    	switch(ch){
    		case 1:{
    			cout<<"enter a value to be pushed"<<endl;
    			cin>>val;
    			s.push(val);
				break;
			}case 2: {
			    s.pop();
			    cout<<"top value is pop"<<endl;
				break;
			}
			case 3:{
				s.display();
				break;
			}
			case 4:{
				cout<<"excit"<<endl;
				break;
			}
			dafault:{
				cout<<"invalid choice"<<endl;
			}
		}
	}while(ch!=4);
		return 0;
   
}
