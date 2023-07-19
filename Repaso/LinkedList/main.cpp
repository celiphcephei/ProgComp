#include <iostream>

using std::cout;
using std::endl;

class Node{
    public:
        int data;
        Node* next;
}; // Node class

class LinkedList{
    public:
        Node *head, *tail;

        LinkedList(): head{NULL}, tail{NULL} {}

        void inserNodeAtFront(int value){
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

        void inserNodeAtEnd(int value){
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = NULL;
            if(head == NULL){
                head == newNode;
                tail = head;
            } else {
                tail->next = newNode;
                tail = tail->next;
            }
        }
        
        void insertNodeAtPosition(int pos, int value){
            Node* current = new Node;
            Node* prev = new Node;
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
                for(int i = 1; i < pos; i++){
                    prev = current;
                    current = current->next;
                    if(current == NULL){
                        cout << "Invalid position." << endl;
                        return;
                    }
                }
                prev->next = newNode;
                newNode->next = current;
            }
        }
}; // LinkedList class

int main(){

    return 0;
}