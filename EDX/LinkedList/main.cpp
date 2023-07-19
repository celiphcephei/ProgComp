#include <iostream>

using std::cout;
using std::endl;

class Node{
    public:
        int data;
        Node* next;
};

class LinkedList{
    public:
        Node* head, *tail;

        LinkedList(): head{NULL}, tail{NULL} {}

        void insertNodeAtFront(int value){
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = NULL;
            if(head == NULL){
                head = newNode;
                tail = newNode;
            } else {
                newNode->next = head;
                head = newNode;
            }
        }

        void insertNodeAtEnd(int value){
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = NULL;
            if(head == NULL){
                head = newNode;
                tail = head;
                return;
            } else {
                tail->next = newNode;
                tail = tail->next;
                return;
            }
        }

        void insertNodeAtPosition(int pos, int value){
            Node* prev = new Node;
            Node* current = new Node;
            current = head;

            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = NULL;
            if(pos < 1){
                cout << "Position cannot be less than 1" << endl;
            } else if(pos == 1){
                newNode->next = head;
                head = newNode;
            } else {
                for(int i = 1; i < pos; ++i){
                    prev = current;
                    current = current->next;
                    if(current == NULL){
                        cout << "Invalid position" << endl; 
                        return;
                    }
                }
                prev->next = newNode;
                newNode->next = current;
            } 
        }

        void search(int value){
            Node* current = head;
            while(current != NULL){
                if(current->data == value){
                    cout << "Element: " << value << " is found." << endl;
                    return;
                }
                current = current->next;
            }
            cout << "Element: " << value << " not found in the list." << endl;
        }

        void displayList(){
            Node* current = head;
            while(current != NULL){
                cout << current->data << ' ';
                current = current->next;
            }
        }

        void deleteNode(int value){
            bool flag = false;
            Node* current = new Node;
            Node* previous = new Node;
            previous = head;
            current = head;
            while(current != NULL){
                
            }

        }
};

int main(){
    LinkedList list;
    list.insertNodeAtFront(5);
    list.insertNodeAtFront(3);
    list.insertNodeAtEnd(4);
    list.insertNodeAtEnd(10);
    list.insertNodeAtPosition(3, 1);
    return 0;
}