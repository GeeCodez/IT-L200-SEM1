#include <iostream>
using namespace std;

// Singly Linked List Node
struct SNode {
    int data;
    SNode* next;
};

// Doubly Linked List Node
struct DNode {
    int data;
    DNode* prev;
    DNode* next;
};

// Singly Linked List Insertions
void insertSLLBegin(SNode*& head, int data) {
    SNode* newNode = new SNode{data, head};
    head = newNode;
}
void insertSLLEnd(SNode*& head, int data) {
    SNode* newNode = new SNode{data, nullptr};
    if(!head) { head = newNode; return; }
    SNode* temp = head;
    while(temp->next) temp = temp->next;
    temp->next = newNode;
}

// Doubly Linked List Insertions
void insertDLLBegin(DNode*& head, int data) {
    DNode* newNode = new DNode{data, nullptr, head};
    if(head) head->prev = newNode;
    head = newNode;
}
void insertDLLEnd(DNode*& head, int data) {
    DNode* newNode = new DNode{data, nullptr, nullptr};
    if(!head) { head = newNode; return; }
    DNode* temp = head;
    while(temp->next) temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

// Print functions
void printSLL(SNode* head) { while(head){ cout<<head->data<<" "; head=head->next; } cout<<endl; }
void printDLL(DNode* head) { while(head){ cout<<head->data<<" "; head=head->next; } cout<<endl; }

int main() {
    SNode* sHead = nullptr;
    insertSLLBegin(sHead, 10);
    insertSLLEnd(sHead, 20);
    insertSLLBegin(sHead, 5);
    cout<<"Singly LL: "; printSLL(sHead);

    DNode* dHead = nullptr;
    insertDLLBegin(dHead, 100);
    insertDLLEnd(dHead, 200);
    insertDLLBegin(dHead, 50);
    cout<<"Doubly LL: "; printDLL(dHead);

    return 0;
}
