#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    } 
};

class LinkedList{
    private:
        Node* head;

    public:
        LinkedList() {
            head = nullptr;
        }

        void insertAtEnd(int value){
            Node* newNode = new Node(value);
            if (head == nullptr){
                head = newNode;
                return;
            }
            Node* current = head;
            while (current->next){
                current = current->next;
            }
            current->next = newNode;
        }

        void insertAtBeginning(int value){
            Node* newNode = new Node(value);
            newNode->next = head;
            head = newNode;
        }

        void insertAtPosition(int val, int pos){
            Node* newNode = new Node(val);
            if (pos == 0) {
                insertAtBeginning(val);
                return;
            }
            int temp = 1;

            Node* current = head;
            while (temp < pos && current){
                current = current->next;
                temp++;
            } 
            Node* tempNode = current->next;
            current->next = newNode;
            newNode->next = tempNode;
        }

        void print() {
            cout << "List: ";
            Node* current = head;
            while (current) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }

        void reverse(){
            Node* current = head;
            Node* prev = nullptr;
            Node* next_node = nullptr;

            while (current){
                next_node = current->next;
                current->next = prev;
                prev = current;
                current = next_node;
            }

            head = prev;
        }

        void removeFromBeginning() {
            if (head) { head = head->next; }
        }

        void removeFromEnd() {
            if (head) {
                Node* current = head;
                while (current->next->next) {
                    current = current->next;
                }
                current->next = nullptr;
            }
        }

        void removeFromPosition(int pos) {
            if (head) {
                int temp = 1;
                Node* current = head;
                while (temp < pos && current->next->next) {
                    current = current->next;
                    temp++;
                }
                current->next = current->next->next;
            }
        }
};


int main() {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);

    list.print();

    list.insertAtBeginning(5);
    list.insertAtBeginning(4);

    list.print();

    list.insertAtPosition(7, 3);    
    list.print();

    list.removeFromBeginning();
    list.removeFromEnd();
    list.print();

    list.removeFromPosition(2);
    list.print();

    list.insertAtPosition(7, 2);
    list.print();
    // list.reverse();
    // list.print();
}