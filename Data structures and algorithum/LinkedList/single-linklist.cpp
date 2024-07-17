#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList{
    private:
        Node* head;

    public:
        LinkedList(){
            head = nullptr;
        }

        void appendAtLast(int data){
            Node* node = new Node(data);
            if(!head){
                head = node;
                return;
            }
            Node * temp = head;
            while(temp->next){
                temp = temp->next;
            }
            temp->next = node;
        }

        void display() {
            Node* temp = head;
            while (temp) {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "nullptr" << endl;
        }
    };

int main(){
    LinkedList list;
    list.appendAtLast(1);
    list.appendAtLast(2);
    list.display();
}