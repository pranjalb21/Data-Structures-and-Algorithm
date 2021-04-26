#include <iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
};

void printNode(Node *head){
    Node *p = head;
    while (p != NULL)
    {
        cout << p->value << " " ;
        p = p->next;
    }
}

int main(){
    int size;
    cout << "Enter the size of the linked list: ";
    cin >> size;
    Node *head = NULL;
    Node *p = head;
    for(int i = 0; i < size; i++){
        Node *temp = new Node();
        cout << "Enter the value: ";
        cin >> temp->value;
        temp->next = NULL;
        if(head == NULL){
            head = temp;
            p = head;
        }
        else{
            p->next = temp;
            p = p->next;
        }
    }
    printNode(head);    
}