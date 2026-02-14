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

// Singly Linked List Deletions
void deleteSLLBegin(SNode*& head) {
    if(!head) return;
    SNode* temp = head;
    head = head->next;
    delete temp;
}
void deleteSLLEnd(SNode*& head) {
    if(!head) return;
    if(!head->next){ delete head; head=nullptr; return; }
    SNode* temp=head;
    while(temp->next->next) temp=temp->next;
    delete temp->next;
    temp->next=nullptr;
}
void deleteSLLByPos(SNode*& head, int pos) {
    if(!head || pos<1) return;
    if(pos==1){ deleteSLLBegin(head); return; }
    SNode* temp=head;
    for(int i=1;i<pos-1 && temp->next;i++) temp=temp->next;
    if(!temp->next) return;
    SNode* del=temp->next;
    temp->next=del->next;
    delete del;
}

// Doubly Linked List Deletions
void deleteDLLBegin(DNode*& head) {
    if(!head) return;
    DNode* temp=head;
    head=head->next;
    if(head) head->prev=nullptr;
    delete temp;
}
void deleteDLLEnd(DNode*& head) {
    if(!head) return;
    if(!head->next){ delete head; head=nullptr; return; }
    DNode* temp=head;
    while(temp->next) temp=temp->next;
    temp->prev->next=nullptr;
    delete temp;
}
void deleteDLLByPos(DNode*& head, int pos) {
    if(!head || pos<1) return;
    if(pos==1){ deleteDLLBegin(head); return; }
    DNode* temp=head;
    for(int i=1;i<pos && temp;i++) temp=temp->next;
    if(!temp) return;
    if(temp->next) temp->next->prev=temp->prev;
    if(temp->prev) temp->prev->next=temp->next;
    delete temp;
}

// Print functions
void printSLL(SNode* head){ while(head){ cout<<head->data<<" "; head=head->next; } cout<<endl; }
void printDLL(DNode* head){ while(head){ cout<<head->data<<" "; head=head->next; } cout<<endl; }

int main(){
    SNode* sHead=nullptr;
    sHead=new SNode{10,nullptr};
    sHead->next=new SNode{20,nullptr};
    sHead->next->next=new SNode{30,nullptr};
    cout<<"Singly LL before deletion: "; printSLL(sHead);
    deleteSLLBegin(sHead);
    deleteSLLEnd(sHead);
    cout<<"Singly LL after deletion: "; printSLL(sHead);

    DNode* dHead=nullptr;
    insertDLLBegin(dHead,100); // reuse insert from previous file
    insertDLLEnd(dHead,200);
    insertDLLBegin(dHead,50);
    cout<<"Doubly LL before deletion: "; printDLL(dHead);
    deleteDLLBegin(dHead);
    deleteDLLEnd(dHead);
    cout<<"Doubly LL after deletion: "; printDLL(dHead);

    return 0;
}
